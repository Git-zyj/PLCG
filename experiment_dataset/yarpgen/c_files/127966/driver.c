#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)248;
_Bool var_10 = (_Bool)0;
unsigned int var_16 = 895466835U;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 8904929197625616101ULL;
_Bool var_20 = (_Bool)1;
int var_21 = -630088778;
short var_22 = (short)-23933;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
