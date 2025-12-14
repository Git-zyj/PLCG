#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4532600186211531621ULL;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 450205406U;
short var_4 = (short)-15733;
unsigned short var_6 = (unsigned short)7114;
int var_7 = -2080550418;
_Bool var_9 = (_Bool)1;
int var_10 = -879466654;
signed char var_12 = (signed char)-5;
unsigned char var_14 = (unsigned char)122;
unsigned char var_15 = (unsigned char)126;
int zero = 0;
unsigned int var_19 = 3459951448U;
long long int var_20 = 8302766032332617168LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
