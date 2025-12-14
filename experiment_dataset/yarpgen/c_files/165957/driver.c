#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
unsigned int var_2 = 121905386U;
unsigned short var_3 = (unsigned short)38871;
unsigned short var_4 = (unsigned short)33663;
unsigned int var_6 = 610167859U;
unsigned int var_7 = 699866431U;
unsigned short var_8 = (unsigned short)33532;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 14721288U;
unsigned int var_11 = 3641342475U;
int var_12 = 1281145750;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 6062371232695997108ULL;
signed char var_18 = (signed char)-106;
signed char var_19 = (signed char)-125;
unsigned long long int var_20 = 14287528392480462050ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
