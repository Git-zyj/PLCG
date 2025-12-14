#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2901048133U;
long long int var_1 = -7216681542686583412LL;
short var_2 = (short)-26831;
unsigned long long int var_3 = 740923130026518732ULL;
unsigned int var_4 = 936624040U;
signed char var_5 = (signed char)27;
signed char var_6 = (signed char)-72;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-4308;
short var_9 = (short)-30584;
signed char var_10 = (signed char)-103;
signed char var_11 = (signed char)109;
unsigned int var_12 = 3196802646U;
long long int var_13 = -864008177751921773LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)-3967;
signed char var_17 = (signed char)46;
unsigned int var_18 = 2098955900U;
signed char var_19 = (signed char)43;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)63;
long long int var_22 = 6120512783871145132LL;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)127;
short var_25 = (short)19192;
signed char var_26 = (signed char)-121;
unsigned int var_27 = 1040763720U;
_Bool var_28 = (_Bool)0;
short var_29 = (short)-12770;
int var_30 = 201327938;
long long int var_31 = -6620052505000553375LL;
int var_32 = 900122692;
short var_33 = (short)-17134;
unsigned short var_34 = (unsigned short)42495;
unsigned short var_35 = (unsigned short)39468;
short var_36 = (short)23932;
signed char var_37 = (signed char)-110;
signed char arr_10 [12] [12] [12] [12] ;
long long int arr_18 [12] [12] [12] ;
unsigned char arr_27 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)87 : (signed char)-115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 957800232499619754LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)23;
}

void checksum() {
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
