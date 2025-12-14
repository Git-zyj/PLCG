#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1171870822;
signed char var_3 = (signed char)-79;
unsigned long long int var_5 = 14619085860265010653ULL;
_Bool var_9 = (_Bool)0;
long long int var_12 = 5623381395942866480LL;
long long int var_14 = 6961922784613372826LL;
int zero = 0;
int var_16 = 373649208;
unsigned long long int var_17 = 10011444149330756608ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
