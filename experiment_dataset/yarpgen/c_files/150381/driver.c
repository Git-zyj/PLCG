#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 153338780589249403ULL;
long long int var_3 = -5774434116673060311LL;
unsigned long long int var_8 = 15120083323080916832ULL;
unsigned char var_9 = (unsigned char)86;
int zero = 0;
signed char var_16 = (signed char)46;
unsigned short var_17 = (unsigned short)27389;
unsigned int var_18 = 685247112U;
unsigned short var_19 = (unsigned short)49902;
unsigned short var_20 = (unsigned short)38115;
unsigned long long int var_21 = 16895026731108995407ULL;
_Bool var_22 = (_Bool)0;
unsigned int arr_3 [15] [15] ;
unsigned char arr_8 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 3459877025U : 621369694U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)238;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
