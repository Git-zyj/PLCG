#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)68;
unsigned short var_4 = (unsigned short)33427;
unsigned int var_5 = 3093475704U;
long long int var_6 = -1251440654002823054LL;
long long int var_7 = -7490081336798973132LL;
short var_8 = (short)10473;
int zero = 0;
unsigned long long int var_10 = 5154507125276855653ULL;
short var_11 = (short)26814;
short var_12 = (short)-26978;
_Bool var_13 = (_Bool)1;
unsigned char arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)253;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
