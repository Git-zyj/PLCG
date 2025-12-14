#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -591958691;
int var_2 = 1025250464;
long long int var_3 = -2862202681795605548LL;
int var_5 = -1244977155;
unsigned long long int var_7 = 7713700267289479386ULL;
short var_12 = (short)14242;
signed char var_16 = (signed char)91;
int zero = 0;
unsigned short var_18 = (unsigned short)22876;
signed char var_19 = (signed char)-67;
short var_20 = (short)-29227;
unsigned short var_21 = (unsigned short)48507;
long long int var_22 = -1848212872848452305LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
