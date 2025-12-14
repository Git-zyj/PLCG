#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7375745544133954723LL;
unsigned int var_1 = 3439767139U;
unsigned long long int var_2 = 7780498378613601272ULL;
unsigned char var_3 = (unsigned char)174;
signed char var_7 = (signed char)-118;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 3053925599U;
unsigned int var_14 = 3664361693U;
int zero = 0;
int var_17 = 1195288383;
_Bool var_18 = (_Bool)1;
int var_19 = 485315079;
unsigned long long int var_20 = 9709931640627253609ULL;
unsigned char arr_2 [20] [20] [20] ;
int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1940449480;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
