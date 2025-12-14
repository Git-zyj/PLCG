#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)129;
unsigned short var_5 = (unsigned short)59015;
unsigned int var_6 = 3163294275U;
unsigned long long int var_7 = 479966881386064543ULL;
short var_8 = (short)-20462;
unsigned long long int var_9 = 9715689876067631387ULL;
long long int var_10 = -8326666881239672222LL;
long long int var_12 = -2147601820986487140LL;
long long int var_13 = -4168192135500857431LL;
unsigned char var_14 = (unsigned char)142;
unsigned short var_15 = (unsigned short)47285;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = 8312892713444577434LL;
signed char var_18 = (signed char)-125;
short var_19 = (short)9541;
unsigned int var_20 = 2363192306U;
unsigned short var_21 = (unsigned short)7874;
short var_22 = (short)7164;
unsigned char var_23 = (unsigned char)69;
short var_24 = (short)-15458;
unsigned int var_25 = 3885257498U;
unsigned long long int var_26 = 12678293285962962714ULL;
unsigned long long int var_27 = 6288583402926496ULL;
unsigned short arr_1 [12] ;
unsigned short arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)553;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)6458;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
