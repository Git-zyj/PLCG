#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12742705198928207058ULL;
long long int var_3 = -5405256872503364715LL;
unsigned short var_5 = (unsigned short)41816;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)3474;
short var_8 = (short)-11892;
long long int var_9 = 2477855965795376893LL;
unsigned short var_10 = (unsigned short)24269;
long long int var_12 = -8442627881422523041LL;
int zero = 0;
unsigned short var_13 = (unsigned short)21031;
short var_14 = (short)-14980;
unsigned int var_15 = 3219758390U;
signed char var_16 = (signed char)-28;
short var_17 = (short)22113;
_Bool var_18 = (_Bool)0;
short var_19 = (short)31717;
unsigned char arr_0 [15] [15] ;
_Bool arr_2 [15] [15] ;
long long int arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)148 : (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 981948000193441389LL : -25387763242995346LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
