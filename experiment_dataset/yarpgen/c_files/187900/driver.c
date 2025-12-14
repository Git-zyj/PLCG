#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)178;
unsigned long long int var_4 = 16145723286703364218ULL;
unsigned char var_10 = (unsigned char)120;
long long int var_11 = 8583006558573077300LL;
unsigned short var_12 = (unsigned short)58486;
int var_15 = -883087460;
unsigned short var_16 = (unsigned short)35529;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)156;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)52992;
unsigned int var_21 = 1147476801U;
unsigned long long int arr_0 [12] [12] ;
unsigned short arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 9677143685604176614ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)54300;
}

void checksum() {
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
