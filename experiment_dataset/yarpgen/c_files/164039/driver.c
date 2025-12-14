#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32286;
unsigned short var_2 = (unsigned short)19506;
int var_5 = 1206887137;
unsigned short var_9 = (unsigned short)55889;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1264510119U;
unsigned int var_16 = 2728774304U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
