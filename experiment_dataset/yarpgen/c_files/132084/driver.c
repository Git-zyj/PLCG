#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)31;
unsigned char var_2 = (unsigned char)136;
long long int var_5 = 8036324319284334049LL;
long long int var_6 = -6201307387696643360LL;
unsigned char var_10 = (unsigned char)221;
unsigned char var_11 = (unsigned char)26;
short var_13 = (short)-7797;
unsigned char var_14 = (unsigned char)217;
int var_18 = -1559935749;
unsigned long long int var_19 = 9690679631265962876ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)28045;
int var_21 = 21228727;
unsigned short var_22 = (unsigned short)7411;
long long int var_23 = 1223702023120252712LL;
signed char var_24 = (signed char)35;
int var_25 = -699447336;
long long int var_26 = 313281354000074722LL;
unsigned char var_27 = (unsigned char)185;
unsigned char arr_1 [21] [21] ;
unsigned long long int arr_7 [21] [21] [21] [21] ;
unsigned short arr_9 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 7696572487479056373ULL : 14208180359241795089ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)58180;
}

void checksum() {
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
