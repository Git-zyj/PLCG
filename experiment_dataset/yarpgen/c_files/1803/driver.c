#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1614419335U;
unsigned int var_3 = 2061670174U;
unsigned char var_4 = (unsigned char)33;
unsigned char var_6 = (unsigned char)77;
_Bool var_10 = (_Bool)1;
int var_15 = -1431903706;
int zero = 0;
short var_18 = (short)16101;
_Bool var_19 = (_Bool)1;
int var_20 = 2075517909;
long long int var_21 = 4477968095925548137LL;
long long int var_22 = 5909767477206455662LL;
unsigned int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 2586162903U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
