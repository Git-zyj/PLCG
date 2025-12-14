#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6425020406954511838LL;
unsigned char var_1 = (unsigned char)72;
unsigned long long int var_2 = 10770585369744168245ULL;
signed char var_3 = (signed char)56;
unsigned long long int var_4 = 11290706567947091370ULL;
unsigned long long int var_5 = 7924790259450217630ULL;
long long int var_6 = 836086862730252288LL;
unsigned long long int var_7 = 9559892948726982135ULL;
signed char var_8 = (signed char)32;
signed char var_10 = (signed char)-6;
int var_12 = 9209033;
unsigned char var_14 = (unsigned char)149;
unsigned char var_15 = (unsigned char)75;
int zero = 0;
signed char var_17 = (signed char)13;
int var_18 = 182018084;
short var_19 = (short)-19540;
short var_20 = (short)-11118;
long long int var_21 = 6435658783036696066LL;
signed char var_22 = (signed char)5;
unsigned int var_23 = 1148609965U;
unsigned char var_24 = (unsigned char)60;
int var_25 = 1374009920;
signed char var_26 = (signed char)-41;
unsigned char var_27 = (unsigned char)200;
unsigned long long int var_28 = 11511796253159189098ULL;
unsigned long long int var_29 = 11367750786399057925ULL;
signed char arr_1 [21] ;
_Bool arr_2 [21] [21] ;
signed char arr_4 [21] [21] [21] ;
int arr_6 [21] [21] [21] ;
unsigned int arr_7 [21] [21] [21] [21] ;
_Bool arr_9 [21] [21] [21] [21] [21] ;
signed char arr_11 [21] [21] [21] [21] [21] ;
unsigned long long int arr_12 [21] [21] ;
_Bool arr_14 [15] ;
short arr_15 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1485630757;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 2656983586U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = 10058165664303988691ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-1020;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
