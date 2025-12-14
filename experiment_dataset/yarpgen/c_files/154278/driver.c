#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)150;
unsigned long long int var_12 = 1063510657565355700ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)29560;
unsigned int var_14 = 295668715U;
void init() {
}

void checksum() {
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
