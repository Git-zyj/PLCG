#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2043816451U;
unsigned short var_5 = (unsigned short)6879;
long long int var_6 = 6064595969710679100LL;
long long int var_7 = -6376426868807295971LL;
unsigned short var_8 = (unsigned short)53905;
int var_11 = 537894730;
long long int var_12 = -6375347847280138252LL;
int zero = 0;
unsigned int var_20 = 2127483025U;
long long int var_21 = 411751560113310020LL;
unsigned char var_22 = (unsigned char)125;
unsigned short var_23 = (unsigned short)11740;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
