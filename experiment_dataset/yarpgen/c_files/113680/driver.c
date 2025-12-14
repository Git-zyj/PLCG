#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3554636953662117607LL;
unsigned long long int var_2 = 8531279389743348453ULL;
unsigned int var_7 = 770036276U;
signed char var_9 = (signed char)100;
signed char var_10 = (signed char)13;
long long int var_11 = 2150442135928603998LL;
unsigned char var_12 = (unsigned char)230;
int var_13 = -371797162;
long long int var_15 = 5346766311568392419LL;
int var_16 = 1625907258;
short var_17 = (short)-30409;
int zero = 0;
short var_18 = (short)11604;
long long int var_19 = 5940123845592218231LL;
long long int var_20 = -6211972062146528309LL;
unsigned char var_21 = (unsigned char)83;
long long int var_22 = 4974139428879896442LL;
long long int var_23 = -8656176569750668508LL;
short arr_0 [16] [16] ;
unsigned long long int arr_1 [16] [16] ;
short arr_2 [16] ;
long long int arr_4 [12] [12] ;
long long int arr_9 [25] ;
long long int arr_10 [25] [25] [25] ;
long long int arr_12 [25] [25] ;
unsigned short arr_3 [16] ;
int arr_6 [12] ;
long long int arr_13 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)31878;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 5328407405693413239ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-11307;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = -8599127346289971168LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 5252749008040251858LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -6505102061776587579LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 2654709312227356377LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13644 : (unsigned short)5195;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -1376366576;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = 5479802222439927126LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
