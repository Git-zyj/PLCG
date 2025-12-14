#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)112;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 14751366588942353646ULL;
int var_10 = -8309758;
int zero = 0;
int var_13 = 718978024;
unsigned long long int var_14 = 16006171055403835841ULL;
unsigned char var_15 = (unsigned char)107;
unsigned long long int var_16 = 13441016747066586302ULL;
void init() {
}

void checksum() {
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
