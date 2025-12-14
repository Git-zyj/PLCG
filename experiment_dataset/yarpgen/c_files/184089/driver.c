#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9532500361826593115ULL;
unsigned long long int var_1 = 17545594175073035967ULL;
unsigned long long int var_3 = 5822225830341584675ULL;
unsigned long long int var_4 = 4147681869561982738ULL;
unsigned long long int var_6 = 11353853081477020712ULL;
unsigned long long int var_12 = 11385269544412714092ULL;
unsigned long long int var_13 = 11142909728591172190ULL;
unsigned long long int var_16 = 6182919408712596398ULL;
int zero = 0;
unsigned long long int var_18 = 17598515603695101799ULL;
unsigned long long int var_19 = 16862948977504340850ULL;
unsigned long long int var_20 = 16833987112811077788ULL;
unsigned long long int arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 636607948175148894ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
