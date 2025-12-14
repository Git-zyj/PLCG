#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3575128356U;
unsigned long long int var_9 = 4122535679297656547ULL;
unsigned long long int var_12 = 9236741178473475061ULL;
int zero = 0;
short var_13 = (short)-8283;
unsigned int var_14 = 3661811004U;
unsigned long long int var_15 = 565221007449466310ULL;
short arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)19162;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
