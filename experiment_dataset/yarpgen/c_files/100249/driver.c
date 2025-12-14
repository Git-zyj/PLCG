#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-28;
int var_2 = -655923433;
unsigned char var_5 = (unsigned char)209;
unsigned char var_6 = (unsigned char)76;
int zero = 0;
unsigned long long int var_11 = 15444112516980933802ULL;
signed char var_12 = (signed char)-22;
unsigned long long int var_13 = 13585433919371865881ULL;
unsigned char var_14 = (unsigned char)137;
unsigned long long int arr_0 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 60352598641067655ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
