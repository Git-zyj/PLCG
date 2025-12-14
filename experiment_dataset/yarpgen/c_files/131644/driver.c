#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 588898945;
int var_1 = 983660383;
long long int var_4 = -6417877801348109226LL;
_Bool var_8 = (_Bool)1;
int var_10 = -11198059;
int zero = 0;
int var_11 = -1192450049;
unsigned short var_12 = (unsigned short)11163;
unsigned short var_13 = (unsigned short)43391;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
_Bool arr_0 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
