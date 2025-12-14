#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19826;
unsigned long long int var_3 = 4674146978176426561ULL;
short var_4 = (short)-5199;
signed char var_5 = (signed char)11;
unsigned char var_7 = (unsigned char)147;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)-98;
unsigned short var_14 = (unsigned short)30632;
int zero = 0;
long long int var_16 = -8889987688592185122LL;
int var_17 = 1468444305;
unsigned int var_18 = 918221974U;
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
