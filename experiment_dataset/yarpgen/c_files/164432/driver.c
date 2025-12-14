#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 180678279;
unsigned long long int var_4 = 3736158640901301061ULL;
unsigned long long int var_6 = 130733288381562774ULL;
unsigned long long int var_8 = 7027019071178470741ULL;
int var_9 = -622570575;
unsigned long long int var_10 = 17073776912521973021ULL;
unsigned char var_12 = (unsigned char)27;
int var_14 = -1406131780;
short var_16 = (short)25795;
unsigned char var_17 = (unsigned char)244;
int zero = 0;
unsigned long long int var_18 = 3281795226273156732ULL;
unsigned long long int var_19 = 3546337956516290877ULL;
int var_20 = 2052348760;
int var_21 = -1627320622;
unsigned long long int var_22 = 3951380068820453374ULL;
unsigned long long int var_23 = 10288139866328380043ULL;
unsigned long long int var_24 = 5822752950368308165ULL;
_Bool var_25 = (_Bool)1;
int var_26 = 2129258560;
_Bool var_27 = (_Bool)1;
unsigned long long int arr_0 [20] [20] ;
unsigned long long int arr_1 [20] [20] ;
short arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 3122399123701819749ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 4760747312407796205ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-6854;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
