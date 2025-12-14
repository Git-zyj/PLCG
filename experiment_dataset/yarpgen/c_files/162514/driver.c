#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
int var_2 = -1118325216;
unsigned int var_3 = 127770703U;
unsigned long long int var_4 = 2590077637468386123ULL;
unsigned short var_5 = (unsigned short)35565;
signed char var_6 = (signed char)-103;
unsigned long long int var_7 = 6761875123069265549ULL;
unsigned char var_9 = (unsigned char)116;
unsigned long long int var_10 = 3262959951261523090ULL;
unsigned short var_11 = (unsigned short)43290;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1603634322U;
unsigned long long int var_14 = 2445836846015522142ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)144;
short var_16 = (short)29018;
short var_17 = (short)22967;
unsigned long long int var_18 = 6644396249743507197ULL;
unsigned int var_19 = 1552562424U;
unsigned short var_20 = (unsigned short)15835;
unsigned short var_21 = (unsigned short)51416;
unsigned int var_22 = 4268531276U;
signed char var_23 = (signed char)-21;
long long int var_24 = 3653433004039498454LL;
unsigned long long int var_25 = 4857335511148421611ULL;
unsigned short var_26 = (unsigned short)11797;
unsigned long long int var_27 = 8141882784037166265ULL;
_Bool var_28 = (_Bool)1;
short var_29 = (short)-2661;
unsigned int var_30 = 3773038893U;
short var_31 = (short)-10507;
long long int var_32 = 7502753248875743575LL;
unsigned char var_33 = (unsigned char)47;
unsigned char var_34 = (unsigned char)28;
unsigned long long int arr_3 [16] ;
unsigned short arr_21 [19] [19] [19] [19] [19] [19] ;
unsigned int arr_38 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 4460874926690583116ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned short)32850 : (unsigned short)64562;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_38 [i_0] = 4212791079U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
