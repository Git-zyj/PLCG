#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7065406564380066805ULL;
unsigned int var_1 = 1922626757U;
signed char var_2 = (signed char)12;
unsigned long long int var_7 = 151340496991696233ULL;
int zero = 0;
long long int var_14 = 1001671403543488357LL;
unsigned long long int var_15 = 198768551245701689ULL;
short var_16 = (short)25153;
unsigned long long int var_17 = 10369656258507316715ULL;
unsigned long long int arr_3 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 5999281972444145738ULL : 6856336938532076170ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
