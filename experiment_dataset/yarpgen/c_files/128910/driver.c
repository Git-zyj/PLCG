#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 287790805U;
long long int var_4 = 1041954723650781379LL;
unsigned int var_5 = 2332920034U;
long long int var_7 = 3278880813288260849LL;
unsigned char var_8 = (unsigned char)8;
unsigned char var_12 = (unsigned char)233;
long long int var_13 = -4688493172463167910LL;
int var_15 = 1837749282;
int zero = 0;
long long int var_16 = 9150372723990100800LL;
long long int var_17 = 8441739693089965883LL;
unsigned int var_18 = 1218576968U;
unsigned long long int var_19 = 13986977928215502123ULL;
long long int var_20 = 3478255879268908314LL;
unsigned long long int var_21 = 9095463792206582350ULL;
unsigned int var_22 = 2693943521U;
long long int arr_0 [24] ;
unsigned int arr_1 [24] [24] ;
unsigned int arr_2 [24] ;
long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 5896619680440920510LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 4089611777U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1355913927U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -2035420702870415519LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
