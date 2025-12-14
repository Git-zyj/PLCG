#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12851;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)597;
unsigned char var_10 = (unsigned char)163;
unsigned long long int var_11 = 8837608048742267174ULL;
int zero = 0;
unsigned long long int var_12 = 5521687697410449421ULL;
unsigned long long int var_13 = 15349137168078665184ULL;
unsigned int var_14 = 6706141U;
long long int var_15 = 8592269233728244175LL;
unsigned long long int var_16 = 5434529619612798165ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
