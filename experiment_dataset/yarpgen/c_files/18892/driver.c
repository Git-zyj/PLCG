#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19513;
unsigned int var_3 = 4051433494U;
unsigned long long int var_13 = 2717345433391357435ULL;
int zero = 0;
int var_15 = 1357774784;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)61211;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
