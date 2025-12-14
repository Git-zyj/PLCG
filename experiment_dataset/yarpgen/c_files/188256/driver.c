#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)58;
unsigned long long int var_6 = 12537649069104164772ULL;
unsigned short var_8 = (unsigned short)29914;
unsigned long long int var_10 = 13428612145662357308ULL;
unsigned long long int var_11 = 7619107932706096150ULL;
int zero = 0;
unsigned long long int var_13 = 15164962516281556834ULL;
int var_14 = -1020603753;
long long int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3198820977856742085LL : -1957105733142839317LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
