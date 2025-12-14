#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2052183536;
long long int var_8 = -3920297993050466745LL;
unsigned int var_10 = 2613093393U;
int var_13 = -831515664;
unsigned short var_16 = (unsigned short)57687;
_Bool var_17 = (_Bool)0;
int var_18 = 1979046803;
int zero = 0;
int var_19 = 104801697;
unsigned long long int var_20 = 7356025808216709912ULL;
int var_21 = -85464817;
unsigned long long int arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 14019650985656518979ULL : 3226018962785045893ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
