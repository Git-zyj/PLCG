#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9076025519226290575LL;
long long int var_2 = -948071537729556092LL;
long long int var_3 = -4050142259850350057LL;
long long int var_6 = -3187726691442739585LL;
long long int var_7 = -8421993272808734688LL;
long long int var_8 = 4177342992087203348LL;
long long int var_10 = -8010477608017798746LL;
int zero = 0;
long long int var_11 = -5969500024518821838LL;
long long int var_12 = 788685446100070231LL;
long long int var_13 = -2184176214799978178LL;
long long int var_14 = 1301836309915069336LL;
long long int var_15 = 9038250932958104954LL;
long long int var_16 = 6065339362486432502LL;
long long int var_17 = -2782601297039570067LL;
long long int var_18 = 2672710176450322006LL;
long long int var_19 = -8640449683103695772LL;
long long int var_20 = -4972052152007606087LL;
long long int arr_1 [14] ;
long long int arr_2 [14] ;
long long int arr_5 [14] [14] ;
long long int arr_7 [14] [14] ;
long long int arr_8 [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -8067899376804549536LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -5139644769577934565LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = -5841498218666109953LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = -8495599196057042686LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 5330150216731412056LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
