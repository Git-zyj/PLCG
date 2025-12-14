#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 762742495;
short var_9 = (short)1399;
unsigned char var_10 = (unsigned char)186;
int zero = 0;
unsigned long long int var_18 = 977637298739078961ULL;
unsigned long long int var_19 = 14772508173518684070ULL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 4307200877851443413ULL;
long long int var_22 = -7145218709947925865LL;
unsigned short arr_13 [14] ;
short arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36462 : (unsigned short)14573;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-18180 : (short)-30290;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
