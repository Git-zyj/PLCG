#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 954257386688059120ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2030255600U;
signed char var_4 = (signed char)55;
int var_5 = 394734801;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)234;
long long int var_10 = -4562038352380450804LL;
signed char var_13 = (signed char)-28;
unsigned short var_14 = (unsigned short)48857;
int zero = 0;
unsigned int var_16 = 2889009146U;
unsigned short var_17 = (unsigned short)38442;
int var_18 = 151890898;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
