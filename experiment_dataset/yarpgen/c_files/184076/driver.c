#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9388650022783815989ULL;
unsigned int var_1 = 3964326802U;
unsigned short var_3 = (unsigned short)3800;
unsigned long long int var_4 = 4464197747108126073ULL;
long long int var_8 = 1339022689799323451LL;
unsigned long long int var_9 = 16536949071938202024ULL;
unsigned char var_10 = (unsigned char)236;
int zero = 0;
unsigned int var_11 = 4194190773U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1332070542U;
int var_14 = 1218684891;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)20214;
long long int var_17 = 2484409213745407766LL;
long long int arr_0 [15] ;
unsigned long long int arr_2 [15] ;
long long int arr_4 [15] ;
_Bool arr_6 [15] [15] [15] [15] ;
int arr_7 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -776594973495432731LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 15009200219517536226ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -7459405120695065124LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 841677446;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
