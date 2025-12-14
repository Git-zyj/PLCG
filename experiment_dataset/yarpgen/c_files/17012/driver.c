#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -492204022460329150LL;
long long int var_3 = -7059007475264057946LL;
unsigned long long int var_6 = 8562324141353569715ULL;
signed char var_7 = (signed char)-1;
int var_8 = 945131359;
short var_11 = (short)2798;
unsigned int var_15 = 1532636050U;
long long int var_17 = -6813262690848859308LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -843322057;
unsigned short var_20 = (unsigned short)27668;
short var_21 = (short)-11153;
unsigned char var_22 = (unsigned char)14;
int var_23 = -583815003;
long long int arr_2 [17] ;
unsigned char arr_3 [17] ;
unsigned char arr_6 [17] [17] ;
int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 5380442001014294660LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)51 : (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -851791406 : -285187543;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
