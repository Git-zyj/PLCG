#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
long long int var_2 = -986611422449219841LL;
unsigned char var_4 = (unsigned char)111;
unsigned char var_6 = (unsigned char)32;
unsigned short var_10 = (unsigned short)23985;
int var_11 = -26217217;
unsigned short var_12 = (unsigned short)33767;
int zero = 0;
unsigned long long int var_14 = 8749101055628149514ULL;
int var_15 = -1104057799;
unsigned long long int var_16 = 7043892085559162600ULL;
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
