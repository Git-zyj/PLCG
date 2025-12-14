#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2987143574U;
unsigned int var_2 = 508035973U;
long long int var_7 = 2284173521502647403LL;
long long int var_8 = 8059648197280433863LL;
long long int var_9 = -6456783271860163487LL;
long long int var_10 = -6474003346866180657LL;
unsigned int var_12 = 3372272511U;
int zero = 0;
long long int var_14 = -3559015979605780176LL;
unsigned char var_15 = (unsigned char)80;
unsigned long long int var_16 = 9721803104021413162ULL;
unsigned int var_17 = 3190637265U;
long long int var_18 = 5509122442827386539LL;
long long int var_19 = 1162685179979562961LL;
unsigned int arr_7 [20] [20] [20] [20] ;
int arr_13 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 53527983U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = -326544920;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
