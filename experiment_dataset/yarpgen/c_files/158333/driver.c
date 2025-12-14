#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 1082640258719477037LL;
int var_3 = 1143097126;
_Bool var_6 = (_Bool)0;
long long int var_7 = -4001852469866836420LL;
unsigned long long int var_8 = 17916371126672792610ULL;
long long int var_9 = -7750825291986815225LL;
_Bool var_12 = (_Bool)0;
short var_14 = (short)15880;
unsigned long long int var_16 = 3644649216719225900ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-27832;
long long int var_19 = -7929105504656298538LL;
short var_20 = (short)-18875;
unsigned long long int var_21 = 5304272150053590431ULL;
unsigned long long int arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 18292002059600905014ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 4468619686740309844ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -7650486204119221943LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
