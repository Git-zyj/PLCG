#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4626036169484139688ULL;
unsigned long long int var_10 = 4742511471045554945ULL;
unsigned long long int var_11 = 13937259509443129295ULL;
unsigned long long int var_14 = 12019445431920104489ULL;
int zero = 0;
unsigned long long int var_15 = 10246838188940343931ULL;
unsigned long long int var_16 = 2875686626119394821ULL;
unsigned long long int var_17 = 8512685310641086052ULL;
unsigned long long int var_18 = 428896242912227675ULL;
unsigned long long int arr_0 [23] [23] ;
unsigned long long int arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 9997494705630421981ULL : 15699914015713428939ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 16298979904750898050ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
