#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48602;
unsigned char var_1 = (unsigned char)13;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 889383653U;
unsigned char var_4 = (unsigned char)242;
signed char var_5 = (signed char)-4;
long long int var_6 = -7647356953012904431LL;
unsigned char var_7 = (unsigned char)159;
unsigned int var_8 = 1702982427U;
unsigned char var_9 = (unsigned char)114;
signed char var_11 = (signed char)-125;
int var_12 = -310985382;
unsigned short var_13 = (unsigned short)47871;
unsigned short var_15 = (unsigned short)41671;
unsigned int var_16 = 3634149009U;
int zero = 0;
unsigned char var_17 = (unsigned char)93;
long long int var_18 = -845359471927678530LL;
int var_19 = -1353439170;
unsigned char var_20 = (unsigned char)228;
int var_21 = 1017944090;
int var_22 = 132508706;
short var_23 = (short)7373;
unsigned char var_24 = (unsigned char)244;
int var_25 = -615798986;
unsigned long long int var_26 = 10838384180778322107ULL;
_Bool var_27 = (_Bool)0;
int var_28 = -828430477;
unsigned short var_29 = (unsigned short)37150;
_Bool var_30 = (_Bool)1;
unsigned char var_31 = (unsigned char)248;
signed char var_32 = (signed char)16;
unsigned char var_33 = (unsigned char)118;
unsigned long long int var_34 = 15034757043946605986ULL;
unsigned int var_35 = 626626028U;
int arr_25 [17] [17] [17] [17] [17] ;
int arr_28 [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 1510247938 : -646805078;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 898904646 : -490747453;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
