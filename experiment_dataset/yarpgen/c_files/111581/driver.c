#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3049042331242792827LL;
int var_1 = -1199818067;
unsigned short var_2 = (unsigned short)33275;
long long int var_3 = -2778066952182673751LL;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)-113;
unsigned short var_9 = (unsigned short)27859;
int zero = 0;
unsigned int var_10 = 393912440U;
unsigned int var_11 = 2002297739U;
unsigned long long int var_12 = 4356863405617182960ULL;
unsigned short var_13 = (unsigned short)46345;
int arr_5 [21] [21] [21] ;
unsigned short arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -976703067;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2414 : (unsigned short)19859;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
