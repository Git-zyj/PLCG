#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24845;
short var_2 = (short)-209;
unsigned long long int var_4 = 13997531635473935132ULL;
unsigned short var_5 = (unsigned short)27518;
unsigned char var_6 = (unsigned char)222;
long long int var_8 = 6724639741928076908LL;
unsigned int var_9 = 3087210106U;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = 944739011354746570LL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)13940;
int var_15 = 2072493328;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 14441805078170287356ULL;
unsigned long long int arr_0 [18] [18] ;
long long int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 6442524630565279ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -8692683997586479342LL : -8157633329698484357LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
