#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -407292456;
signed char var_5 = (signed char)-5;
signed char var_9 = (signed char)28;
int var_12 = 173296585;
int zero = 0;
int var_18 = -1670153124;
unsigned long long int var_19 = 12906942784393600739ULL;
int var_20 = -1287598703;
int var_21 = 1934615083;
int var_22 = -1120485810;
int var_23 = -60408978;
int var_24 = -226176059;
signed char var_25 = (signed char)15;
unsigned long long int arr_3 [13] ;
unsigned long long int arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 16996266632877761080ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 6960433770159020776ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
