#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32127;
unsigned int var_3 = 1934067246U;
unsigned int var_6 = 3335132139U;
long long int var_7 = -5124863648181895239LL;
int zero = 0;
long long int var_11 = -3372529223088325353LL;
unsigned long long int var_12 = 1646593968394817403ULL;
long long int var_13 = 616387011973337398LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
