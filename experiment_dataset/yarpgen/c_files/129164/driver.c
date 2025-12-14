#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1965692792;
signed char var_5 = (signed char)89;
long long int var_8 = 1934779812219608115LL;
unsigned char var_10 = (unsigned char)202;
unsigned long long int var_13 = 17705162161760074215ULL;
unsigned int var_16 = 1413793173U;
int zero = 0;
unsigned long long int var_17 = 1965723077021488459ULL;
long long int var_18 = 3612151630134113766LL;
short var_19 = (short)4406;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2149713395U;
short var_22 = (short)-29019;
unsigned short var_23 = (unsigned short)1130;
long long int var_24 = 3294893237228837199LL;
short var_25 = (short)-14267;
unsigned char arr_0 [12] ;
signed char arr_5 [12] ;
signed char arr_7 [16] ;
short arr_12 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)9414 : (short)-20047;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
