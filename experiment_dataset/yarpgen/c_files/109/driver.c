#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)21590;
unsigned long long int var_4 = 1494824503702105196ULL;
signed char var_8 = (signed char)25;
unsigned long long int var_9 = 17209623167502353557ULL;
signed char var_12 = (signed char)25;
int zero = 0;
unsigned long long int var_14 = 1967982171026390164ULL;
int var_15 = 1360392560;
signed char var_16 = (signed char)16;
int arr_0 [20] ;
unsigned long long int arr_1 [20] ;
long long int arr_2 [20] ;
int arr_3 [20] ;
int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1866319944 : 145576613;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 14402839057730565675ULL : 256687785121357842ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1003736599899481075LL : -9217822374953680115LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1239697051 : 2030155966;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -792974213 : 202181241;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
