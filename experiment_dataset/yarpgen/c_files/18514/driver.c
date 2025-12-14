#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 759928261U;
unsigned short var_10 = (unsigned short)18380;
int zero = 0;
unsigned int var_11 = 1056029521U;
int var_12 = 531700050;
unsigned short var_13 = (unsigned short)17457;
unsigned long long int var_14 = 16633936975862169050ULL;
unsigned long long int var_15 = 12656919630265499615ULL;
unsigned int arr_0 [20] [20] ;
int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 3736237984U : 3908420991U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -1320004778;
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
