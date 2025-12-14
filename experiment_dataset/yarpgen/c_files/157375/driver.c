#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18374;
unsigned int var_1 = 622854904U;
unsigned long long int var_2 = 11985936847932706890ULL;
short var_3 = (short)-16527;
long long int var_4 = 6492589038995841620LL;
unsigned long long int var_6 = 3394347692330349616ULL;
short var_9 = (short)-11942;
short var_10 = (short)25213;
unsigned char var_11 = (unsigned char)36;
unsigned long long int var_12 = 9216230522097377729ULL;
int zero = 0;
unsigned long long int var_13 = 12686254751790141044ULL;
short var_14 = (short)25662;
unsigned long long int var_15 = 9120256802658091782ULL;
unsigned long long int var_16 = 14581429660839753267ULL;
unsigned long long int var_17 = 16966470832313327859ULL;
unsigned int var_18 = 1363853471U;
short var_19 = (short)-3389;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 4692379941624254938ULL;
long long int arr_0 [19] ;
long long int arr_1 [19] ;
_Bool arr_2 [19] [19] ;
unsigned long long int arr_3 [25] ;
unsigned long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 5053682277712347493LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 9001932694531948467LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 4302630704777908112ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 7792717640890696863ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
