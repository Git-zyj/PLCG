#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18246390448376331154ULL;
unsigned int var_3 = 1595594817U;
unsigned long long int var_8 = 18344476109514592026ULL;
long long int var_10 = 3558781706883342909LL;
unsigned int var_11 = 4056875913U;
long long int var_13 = -2482455441596496619LL;
unsigned short var_15 = (unsigned short)50188;
int zero = 0;
unsigned short var_18 = (unsigned short)35905;
short var_19 = (short)-32699;
long long int var_20 = -4919068785767531365LL;
long long int arr_0 [23] ;
long long int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -2976304257496126548LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -5299935088310740205LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
