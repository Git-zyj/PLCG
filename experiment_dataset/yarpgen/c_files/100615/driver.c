#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33142;
long long int var_1 = -7218230824909778512LL;
unsigned long long int var_3 = 14402867354683744026ULL;
int zero = 0;
long long int var_16 = 7316969171551292209LL;
unsigned long long int var_17 = 18092104733275976558ULL;
long long int var_18 = -7657453762774396870LL;
short var_19 = (short)13375;
unsigned short var_20 = (unsigned short)40815;
unsigned int var_21 = 2641761988U;
unsigned int arr_2 [11] ;
int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2628812771U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -640481855;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
