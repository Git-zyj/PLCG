#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6201915085221220707LL;
int var_1 = -782584711;
unsigned int var_2 = 1805001309U;
signed char var_3 = (signed char)61;
unsigned int var_4 = 818759538U;
signed char var_5 = (signed char)41;
signed char var_6 = (signed char)-88;
unsigned short var_7 = (unsigned short)59041;
int var_8 = -139908717;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 11686062695926689475ULL;
_Bool var_11 = (_Bool)1;
long long int var_12 = -9024778030259329787LL;
short var_13 = (short)26231;
int zero = 0;
short var_14 = (short)-30488;
signed char var_15 = (signed char)-69;
unsigned short var_16 = (unsigned short)1610;
unsigned char var_17 = (unsigned char)82;
unsigned int var_18 = 2938122931U;
unsigned int var_19 = 291854523U;
unsigned int var_20 = 2770964498U;
signed char var_21 = (signed char)84;
unsigned int var_22 = 1358557732U;
unsigned char var_23 = (unsigned char)117;
unsigned long long int var_24 = 4790470479831853924ULL;
unsigned short var_25 = (unsigned short)5740;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 2127685295892657878ULL;
int var_28 = 1422682366;
long long int arr_0 [15] ;
unsigned long long int arr_1 [15] [15] ;
short arr_2 [15] ;
long long int arr_3 [15] [15] [15] ;
long long int arr_4 [15] [15] [15] ;
long long int arr_5 [15] [15] [15] [15] ;
int arr_6 [15] ;
unsigned int arr_7 [15] [15] [15] ;
short arr_10 [11] ;
unsigned int arr_12 [11] [11] ;
int arr_14 [11] [11] ;
signed char arr_15 [11] ;
unsigned int arr_17 [11] [11] ;
unsigned int arr_19 [11] [11] ;
long long int arr_22 [11] ;
signed char arr_23 [11] [11] [11] [11] ;
int arr_24 [11] [11] [11] [11] [11] ;
short arr_8 [15] [15] [15] ;
long long int arr_9 [15] ;
unsigned int arr_13 [11] ;
short arr_16 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -1924696585669178155LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 2623985727427964653ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)-9378;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -8972115474467553759LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2872368606227813103LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -7813648029501047764LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 603844191;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 4113431343U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (short)5918;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = 2371835188U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = -2006827083;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = 504109733U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? 224314131U : 1671541776U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 2552659300340826640LL : 6349438342665215652LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = -845905712;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)22319 : (short)1676;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 6043062870309418436LL : 8010949252765313153LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1191772956U : 3195839611U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-8194;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
