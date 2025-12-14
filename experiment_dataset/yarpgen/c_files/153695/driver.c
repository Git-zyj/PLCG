#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 561916708U;
int var_1 = 1392460767;
unsigned long long int var_3 = 4323334249714086570ULL;
signed char var_4 = (signed char)31;
unsigned char var_5 = (unsigned char)122;
unsigned long long int var_7 = 8708138029543307493ULL;
long long int var_8 = 2181665264551158823LL;
unsigned long long int var_10 = 18199987307030827405ULL;
unsigned char var_13 = (unsigned char)7;
int zero = 0;
unsigned long long int var_14 = 797485226950455479ULL;
unsigned int var_15 = 2971239477U;
signed char var_16 = (signed char)125;
signed char var_17 = (signed char)-116;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
