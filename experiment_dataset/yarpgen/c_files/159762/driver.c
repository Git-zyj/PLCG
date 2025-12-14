#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)41;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2412649454U;
signed char var_5 = (signed char)7;
long long int var_6 = 900007864510009950LL;
unsigned char var_7 = (unsigned char)135;
signed char var_8 = (signed char)81;
int zero = 0;
unsigned long long int var_10 = 12705230263108216402ULL;
unsigned char var_11 = (unsigned char)243;
unsigned short var_12 = (unsigned short)12599;
long long int var_13 = 2552848656199078991LL;
unsigned long long int var_14 = 8130190333982391141ULL;
long long int var_15 = 5506456779112765191LL;
signed char arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)122 : (signed char)34;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
