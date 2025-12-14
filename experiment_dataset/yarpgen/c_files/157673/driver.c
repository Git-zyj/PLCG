#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -521561671;
int var_4 = -1191327030;
unsigned char var_7 = (unsigned char)61;
long long int var_10 = -688928770139302031LL;
int zero = 0;
int var_12 = 582037566;
signed char var_13 = (signed char)-12;
signed char var_14 = (signed char)-114;
unsigned char var_15 = (unsigned char)250;
unsigned char var_16 = (unsigned char)121;
int arr_0 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -422697132;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
