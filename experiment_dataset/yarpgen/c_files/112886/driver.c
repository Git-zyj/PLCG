#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22763;
unsigned long long int var_4 = 10282457971533700190ULL;
_Bool var_7 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)125;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 13430050297559490282ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
