#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18027833870831128636ULL;
unsigned int var_2 = 3214566455U;
unsigned char var_3 = (unsigned char)139;
short var_7 = (short)-21685;
long long int var_8 = 2248500975677741998LL;
signed char var_9 = (signed char)-64;
short var_10 = (short)-30609;
unsigned long long int var_11 = 6057969248191806302ULL;
int zero = 0;
unsigned long long int var_13 = 4601328654178228883ULL;
unsigned short var_14 = (unsigned short)16567;
unsigned int var_15 = 3779041970U;
short var_16 = (short)-14374;
signed char var_17 = (signed char)-88;
unsigned short var_18 = (unsigned short)42641;
unsigned long long int var_19 = 3542789111571343816ULL;
long long int var_20 = -1535879647886830533LL;
short var_21 = (short)-11358;
long long int var_22 = 8928156316559708524LL;
long long int var_23 = 8538890341332618598LL;
long long int var_24 = 3699026808599110285LL;
unsigned long long int var_25 = 16482948362042294786ULL;
unsigned short var_26 = (unsigned short)19205;
unsigned long long int arr_0 [21] [21] ;
signed char arr_8 [21] [21] [21] [21] ;
int arr_10 [21] [21] [21] ;
unsigned int arr_11 [21] ;
unsigned char arr_13 [21] [21] [21] [21] [21] [21] ;
int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 4936289197310744261ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -685414077 : -327141437;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 1316148313U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned char)118 : (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 317844206;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
