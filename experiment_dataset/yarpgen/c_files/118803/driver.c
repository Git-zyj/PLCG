#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
unsigned long long int var_1 = 9154963266299689561ULL;
int var_2 = 1517668894;
long long int var_3 = -6597527328488784045LL;
unsigned long long int var_4 = 4385175251695346297ULL;
unsigned short var_5 = (unsigned short)58677;
unsigned long long int var_6 = 7916580174420202377ULL;
unsigned short var_9 = (unsigned short)42489;
unsigned long long int var_11 = 8760155073271342249ULL;
long long int var_12 = -9171076121510556406LL;
unsigned char var_15 = (unsigned char)157;
unsigned char var_16 = (unsigned char)192;
int zero = 0;
long long int var_19 = -36599677002295778LL;
unsigned short var_20 = (unsigned short)25618;
signed char var_21 = (signed char)68;
unsigned char var_22 = (unsigned char)102;
void init() {
}

void checksum() {
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
