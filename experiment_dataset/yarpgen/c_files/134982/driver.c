#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17982396230781618308ULL;
unsigned long long int var_6 = 4438819131476542030ULL;
unsigned long long int var_7 = 15665598250973145803ULL;
unsigned long long int var_9 = 6501615704984165760ULL;
unsigned long long int var_10 = 2236843907196122670ULL;
unsigned long long int var_12 = 5967426212621513434ULL;
int zero = 0;
unsigned long long int var_14 = 15160870282852376591ULL;
unsigned long long int var_15 = 14741110767333708239ULL;
unsigned long long int var_16 = 7147519149289966745ULL;
unsigned long long int var_17 = 7447550870309936708ULL;
unsigned long long int var_18 = 3534715994416590177ULL;
unsigned long long int var_19 = 13984188903944596418ULL;
unsigned long long int var_20 = 12377018152445205799ULL;
unsigned long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 9865296084233961893ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
