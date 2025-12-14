#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
long long int var_1 = 965223430616609433LL;
short var_2 = (short)-12412;
long long int var_3 = 7454515505438653724LL;
unsigned long long int var_4 = 7228090655275573284ULL;
unsigned long long int var_6 = 4329377992827146914ULL;
signed char var_7 = (signed char)-107;
unsigned long long int var_8 = 8544881495515892008ULL;
long long int var_10 = 6832107830687744448LL;
int zero = 0;
unsigned short var_12 = (unsigned short)6536;
short var_13 = (short)-18640;
short var_14 = (short)-16772;
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
