#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6056976924280020781ULL;
unsigned long long int var_2 = 16043285884173332372ULL;
unsigned long long int var_4 = 3612694139034394875ULL;
unsigned char var_5 = (unsigned char)135;
unsigned long long int var_6 = 18206642494517359811ULL;
long long int var_7 = 1613495384297580366LL;
unsigned long long int var_8 = 933005458949302937ULL;
unsigned long long int var_9 = 3700440948131695029ULL;
unsigned long long int var_11 = 9579312942046888047ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)93;
unsigned char var_13 = (unsigned char)53;
unsigned char var_14 = (unsigned char)186;
unsigned long long int var_15 = 17482360563607710250ULL;
unsigned char var_16 = (unsigned char)250;
unsigned long long int var_17 = 10741634263741755443ULL;
unsigned long long int var_18 = 8942657489421229019ULL;
unsigned short var_19 = (unsigned short)41253;
int var_20 = 1608421458;
unsigned long long int var_21 = 16673669826957146604ULL;
unsigned long long int var_22 = 8156704025056006188ULL;
unsigned char var_23 = (unsigned char)187;
unsigned long long int arr_0 [12] ;
unsigned long long int arr_1 [12] [12] ;
unsigned long long int arr_4 [12] ;
unsigned long long int arr_5 [12] [12] [12] [12] ;
unsigned char arr_7 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 9363272121867242494ULL : 13246221045151331619ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 9394465035453538229ULL : 12898753534537453348ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 14429310751124917759ULL : 4954941820075390157ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 15703976305715017255ULL : 7856840977442445542ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)204;
}

void checksum() {
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
