#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 481182529U;
unsigned int var_2 = 1848769510U;
unsigned short var_4 = (unsigned short)28989;
int var_5 = 1774496477;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)111;
unsigned short var_9 = (unsigned short)40591;
int zero = 0;
signed char var_10 = (signed char)74;
unsigned char var_11 = (unsigned char)10;
unsigned int var_12 = 1195011522U;
long long int var_13 = -3255307178058800607LL;
signed char var_14 = (signed char)-94;
unsigned short var_15 = (unsigned short)65316;
long long int var_16 = -7157704058262168248LL;
unsigned int var_17 = 3332691766U;
unsigned short var_18 = (unsigned short)29587;
unsigned long long int var_19 = 30579254083212654ULL;
signed char var_20 = (signed char)-23;
int var_21 = -643076361;
short var_22 = (short)-29387;
unsigned int var_23 = 3186619737U;
short arr_1 [19] [19] ;
signed char arr_5 [19] [19] [19] ;
signed char arr_6 [19] ;
short arr_9 [19] ;
short arr_11 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)22470;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-10 : (signed char)124;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (short)-19699;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)19708;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
