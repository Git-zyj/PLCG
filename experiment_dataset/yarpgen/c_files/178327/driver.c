#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 769584084;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 731433867254893873ULL;
unsigned short var_19 = (unsigned short)22148;
int var_20 = 1637675483;
unsigned long long int var_21 = 3404442469056574844ULL;
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
