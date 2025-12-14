#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25849;
long long int var_3 = 2134262930309663334LL;
unsigned int var_4 = 3967738910U;
long long int var_6 = 3680383511494221639LL;
unsigned int var_7 = 460117417U;
unsigned long long int var_8 = 3811595042003595289ULL;
long long int var_9 = 4829325214253417922LL;
int var_10 = -941736338;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 18367602720565388277ULL;
int zero = 0;
unsigned int var_16 = 2187932425U;
long long int var_17 = 6038067270780300605LL;
unsigned int var_18 = 3576917680U;
long long int var_19 = -8919322684669960523LL;
_Bool arr_0 [21] ;
_Bool arr_6 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
