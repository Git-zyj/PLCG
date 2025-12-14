#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
unsigned char var_2 = (unsigned char)87;
unsigned short var_3 = (unsigned short)51389;
unsigned short var_4 = (unsigned short)4766;
unsigned short var_5 = (unsigned short)39331;
unsigned short var_6 = (unsigned short)27975;
long long int var_7 = 2023514685434492116LL;
long long int var_8 = 6847808943281165711LL;
unsigned long long int var_9 = 6140424910485350961ULL;
unsigned int var_10 = 3822877996U;
unsigned long long int var_11 = 4260315938586608242ULL;
unsigned short var_12 = (unsigned short)52545;
long long int var_13 = 5610721957113023149LL;
unsigned short var_14 = (unsigned short)38130;
long long int var_16 = -3844360703190213275LL;
int var_17 = 329843038;
unsigned long long int var_18 = 6843734643011354498ULL;
int zero = 0;
unsigned int var_19 = 2652235684U;
unsigned long long int var_20 = 15060915566065995846ULL;
unsigned char var_21 = (unsigned char)151;
long long int var_22 = 5963019036183996034LL;
unsigned char var_23 = (unsigned char)31;
unsigned char var_24 = (unsigned char)172;
unsigned char var_25 = (unsigned char)5;
unsigned long long int var_26 = 4964773846110875745ULL;
unsigned int var_27 = 4113364224U;
unsigned long long int var_28 = 16980853005152556187ULL;
unsigned long long int var_29 = 18067596196886964119ULL;
unsigned int var_30 = 349418297U;
long long int var_31 = -5010450223283953077LL;
unsigned long long int var_32 = 11143094643892899915ULL;
unsigned short var_33 = (unsigned short)8290;
unsigned short var_34 = (unsigned short)35869;
unsigned int var_35 = 570349002U;
unsigned long long int var_36 = 2458955322890785236ULL;
long long int arr_14 [13] [13] [13] [13] ;
long long int arr_24 [13] ;
unsigned short arr_25 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -5371703691850542261LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = 5730879324112241205LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = (unsigned short)7327;
}

void checksum() {
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
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
