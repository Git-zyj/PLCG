#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13282379133539173275ULL;
unsigned char var_3 = (unsigned char)226;
unsigned char var_4 = (unsigned char)117;
unsigned int var_6 = 2295458468U;
short var_7 = (short)22679;
signed char var_8 = (signed char)84;
signed char var_9 = (signed char)92;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2387545663U;
unsigned long long int var_13 = 17130474128055863445ULL;
int zero = 0;
unsigned long long int var_15 = 3095578465559378462ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 13206243195619616917ULL;
unsigned char var_18 = (unsigned char)188;
void init() {
}

void checksum() {
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
