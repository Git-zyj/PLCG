#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)5;
long long int var_1 = 693604731172809250LL;
unsigned int var_2 = 3860563055U;
long long int var_4 = -1726064441796630986LL;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 4328276394918838852ULL;
long long int var_13 = 3842984580427395035LL;
int zero = 0;
unsigned long long int var_14 = 5963598394516703416ULL;
unsigned int var_15 = 2365129193U;
unsigned long long int var_16 = 1014028268899932314ULL;
int var_17 = 2135407603;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)197;
unsigned long long int var_20 = 12768484188031250623ULL;
unsigned int arr_2 [10] ;
long long int arr_3 [10] ;
unsigned int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 4019913594U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -5194716200639620246LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 1892692122U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
