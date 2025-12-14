#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-117;
unsigned int var_1 = 1373357533U;
unsigned char var_2 = (unsigned char)32;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)16550;
int var_7 = 1463633303;
unsigned char var_8 = (unsigned char)82;
signed char var_9 = (signed char)107;
unsigned long long int var_10 = 964902466210401570ULL;
unsigned char var_11 = (unsigned char)177;
signed char var_12 = (signed char)5;
int zero = 0;
unsigned char var_13 = (unsigned char)135;
int var_14 = 12954997;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2904597095U;
_Bool var_17 = (_Bool)0;
short var_18 = (short)31870;
short var_19 = (short)-30393;
signed char var_20 = (signed char)3;
unsigned long long int var_21 = 17772383700407107751ULL;
unsigned char arr_0 [21] ;
int arr_4 [21] ;
long long int arr_5 [21] [21] ;
unsigned long long int arr_6 [21] ;
unsigned long long int arr_8 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)95 : (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1716527608 : -486192052;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 658629621149177752LL : 4825088403394608746LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 15746717177421722464ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 6274438808559245854ULL : 12364417654656577535ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
