#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)231;
unsigned int var_8 = 3865201831U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_14 = 1378446306893103862ULL;
unsigned int var_16 = 776857165U;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -3942370411157787394LL;
long long int var_21 = -278057429251127622LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
