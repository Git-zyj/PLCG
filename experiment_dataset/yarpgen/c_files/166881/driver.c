#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3377132880U;
signed char var_2 = (signed char)-54;
int var_4 = 325622518;
int var_6 = -2053473540;
long long int var_9 = -1445522857524755940LL;
int zero = 0;
unsigned long long int var_10 = 12250661552467684005ULL;
unsigned int var_11 = 4211776930U;
unsigned long long int var_12 = 11449394298494654872ULL;
signed char var_13 = (signed char)77;
short var_14 = (short)14137;
unsigned int var_15 = 3803596809U;
unsigned int arr_6 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 3254255546U;
}

void checksum() {
    hash(&seed, var_10);
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
