#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1729271068;
unsigned short var_4 = (unsigned short)43963;
unsigned int var_5 = 1996909635U;
_Bool var_6 = (_Bool)0;
long long int var_8 = 3905755297915235782LL;
unsigned long long int var_12 = 17618421519549222956ULL;
unsigned short var_13 = (unsigned short)65446;
long long int var_15 = 354803184844640657LL;
short var_17 = (short)-27366;
int zero = 0;
unsigned long long int var_19 = 8658268402970483264ULL;
int var_20 = -1051007020;
unsigned char var_21 = (unsigned char)202;
int var_22 = -1527917982;
long long int var_23 = 7078652047102725661LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
