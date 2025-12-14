#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 361649408U;
unsigned int var_1 = 2267075034U;
short var_2 = (short)19682;
unsigned int var_3 = 1432431856U;
short var_4 = (short)-1543;
unsigned int var_8 = 969221147U;
unsigned short var_10 = (unsigned short)54528;
unsigned short var_11 = (unsigned short)3420;
short var_12 = (short)-21833;
unsigned short var_13 = (unsigned short)37580;
unsigned int var_14 = 949249578U;
int zero = 0;
unsigned short var_16 = (unsigned short)10495;
short var_17 = (short)-116;
unsigned int var_18 = 413602684U;
unsigned int var_19 = 3921119768U;
unsigned short var_20 = (unsigned short)16203;
unsigned int var_21 = 3205968611U;
short var_22 = (short)-10910;
unsigned short var_23 = (unsigned short)7990;
unsigned short var_24 = (unsigned short)46907;
unsigned short var_25 = (unsigned short)53000;
short var_26 = (short)5836;
unsigned int var_27 = 2648271610U;
unsigned short var_28 = (unsigned short)62224;
unsigned int var_29 = 2628507648U;
short var_30 = (short)21529;
unsigned short var_31 = (unsigned short)57427;
unsigned int var_32 = 3706018538U;
unsigned int var_33 = 3472904831U;
unsigned int var_34 = 3171730562U;
unsigned int arr_0 [25] ;
short arr_1 [25] [25] ;
unsigned short arr_2 [25] ;
unsigned int arr_3 [25] [25] ;
unsigned int arr_4 [25] [25] [25] ;
unsigned short arr_6 [25] [25] [25] [25] ;
unsigned int arr_7 [25] [25] [25] ;
unsigned int arr_8 [25] ;
unsigned short arr_9 [25] [25] [25] [25] [25] [25] ;
unsigned int arr_10 [25] [25] [25] ;
unsigned short arr_11 [25] [25] ;
unsigned int arr_12 [25] [25] ;
short arr_13 [25] [25] [25] [25] ;
short arr_14 [25] [25] [25] [25] ;
unsigned int arr_16 [21] ;
unsigned int arr_20 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 2998903224U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-6787;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)27078;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 2418204242U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 863016310U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)48417;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1148312751U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 3554196078U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)43488;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 2725156100U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)28696;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 522786582U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)-23114;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (short)14652;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = 1111578459U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = 4120788207U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
