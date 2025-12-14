#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7205017849534504327LL;
unsigned long long int var_2 = 6853218337589657561ULL;
long long int var_3 = 4290196491741045149LL;
short var_6 = (short)12665;
unsigned short var_8 = (unsigned short)17793;
short var_13 = (short)18517;
short var_16 = (short)-11793;
int zero = 0;
long long int var_17 = 4344500760990229719LL;
unsigned int var_18 = 3593133079U;
signed char var_19 = (signed char)-109;
unsigned int var_20 = 1141880534U;
long long int var_21 = -8794473472586702883LL;
unsigned int var_22 = 2129840638U;
long long int arr_0 [25] ;
int arr_1 [25] ;
unsigned int arr_2 [25] [25] ;
unsigned int arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -2435911234566437836LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1269082325;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 173450949U : 1879755220U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 532965163U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
