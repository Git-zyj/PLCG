#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2574221114392493200LL;
long long int var_4 = -6618110665776407283LL;
signed char var_6 = (signed char)59;
unsigned char var_8 = (unsigned char)106;
short var_9 = (short)18274;
signed char var_10 = (signed char)109;
long long int var_16 = -348928285891686034LL;
unsigned long long int var_17 = 360300700456888813ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 551677634U;
int var_20 = 1845667309;
unsigned long long int var_21 = 16073468306600111575ULL;
int var_22 = -1931345565;
unsigned long long int var_23 = 14105585017861572844ULL;
signed char var_24 = (signed char)-41;
unsigned int var_25 = 1976242971U;
signed char var_26 = (signed char)-10;
signed char var_27 = (signed char)-44;
long long int var_28 = -5204105113517519294LL;
signed char var_29 = (signed char)-123;
unsigned char arr_0 [21] ;
long long int arr_2 [21] ;
unsigned short arr_3 [21] ;
long long int arr_4 [21] ;
signed char arr_5 [21] ;
unsigned int arr_6 [21] [21] ;
int arr_7 [21] ;
unsigned long long int arr_8 [21] [21] [21] ;
signed char arr_10 [21] [21] [21] [21] ;
unsigned char arr_11 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)128 : (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 4869257287138488260LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)9457;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 8803954795063109455LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 1773327164U : 3747205661U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1446585062 : -2020832832;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1470010815708865881ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)243;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
