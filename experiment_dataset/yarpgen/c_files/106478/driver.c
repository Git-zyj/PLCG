#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37649;
unsigned long long int var_4 = 1368354639633575511ULL;
long long int var_8 = -3795685226287568787LL;
unsigned int var_10 = 1233088353U;
int zero = 0;
unsigned long long int var_18 = 7069182603485124472ULL;
unsigned int var_19 = 3131880231U;
unsigned char var_20 = (unsigned char)244;
int var_21 = -681385705;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
