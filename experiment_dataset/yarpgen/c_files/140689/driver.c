#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2480637645250069967LL;
long long int var_5 = -8318579157428727577LL;
unsigned long long int var_9 = 10560698207952349219ULL;
unsigned int var_13 = 3221903880U;
unsigned int var_15 = 403372689U;
int zero = 0;
unsigned long long int var_18 = 12095419349161615555ULL;
short var_19 = (short)19084;
unsigned int var_20 = 2923633487U;
unsigned long long int var_21 = 17598532793741478812ULL;
unsigned int arr_3 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 566756891U;
}

void checksum() {
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
