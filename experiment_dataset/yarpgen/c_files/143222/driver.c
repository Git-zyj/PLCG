#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 813981602U;
unsigned char var_2 = (unsigned char)123;
unsigned int var_3 = 409945090U;
unsigned long long int var_4 = 18287789752836805782ULL;
unsigned long long int var_5 = 1143662222340736144ULL;
unsigned long long int var_7 = 18014100949190688309ULL;
unsigned short var_8 = (unsigned short)7088;
long long int var_11 = 1004877783071656374LL;
long long int var_13 = 6586724205825967120LL;
unsigned long long int var_14 = 3457488508415725640ULL;
unsigned char var_15 = (unsigned char)46;
int zero = 0;
int var_16 = 966580234;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-28109;
unsigned long long int var_19 = 5586988253725560407ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
