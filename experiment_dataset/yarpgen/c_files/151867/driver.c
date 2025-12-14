#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1840358824;
unsigned char var_4 = (unsigned char)125;
short var_6 = (short)-31143;
int var_7 = -633813959;
int var_10 = -1481306326;
unsigned short var_12 = (unsigned short)199;
unsigned char var_13 = (unsigned char)177;
unsigned int var_16 = 99613536U;
int zero = 0;
short var_17 = (short)30282;
unsigned long long int var_18 = 15746014200639103608ULL;
unsigned int var_19 = 2359272276U;
int var_20 = -1231173139;
long long int var_21 = 9122414857120947237LL;
unsigned long long int var_22 = 13156623011185006040ULL;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)26;
int var_25 = 250078381;
int arr_1 [11] ;
unsigned char arr_5 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -323140093;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)74 : (unsigned char)35;
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
