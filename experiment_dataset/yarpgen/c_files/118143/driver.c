#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1487738188;
long long int var_1 = -7051380443857793751LL;
long long int var_3 = -4982717006382144198LL;
unsigned int var_4 = 1411566718U;
unsigned long long int var_5 = 16158079562043968678ULL;
unsigned char var_7 = (unsigned char)228;
long long int var_8 = -6177866008195898794LL;
_Bool var_9 = (_Bool)1;
long long int var_10 = 3938509232989999546LL;
long long int var_11 = 3462741158638267927LL;
unsigned char var_12 = (unsigned char)61;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)58;
long long int var_17 = -1816270509801900953LL;
unsigned char var_18 = (unsigned char)78;
int zero = 0;
unsigned short var_19 = (unsigned short)49884;
long long int var_20 = -6177344519693636244LL;
unsigned int var_21 = 1952910113U;
long long int var_22 = -2327778635267947174LL;
long long int var_23 = -1268035813240518473LL;
unsigned short var_24 = (unsigned short)3007;
_Bool var_25 = (_Bool)1;
long long int var_26 = -5945642862560278228LL;
long long int var_27 = -814044230152407091LL;
unsigned char var_28 = (unsigned char)45;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)13809;
unsigned int arr_8 [19] [19] ;
unsigned short arr_12 [19] [19] [19] [19] ;
unsigned short arr_13 [19] [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 2107411773U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)9145 : (unsigned short)62306;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)690 : (unsigned short)64550;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
