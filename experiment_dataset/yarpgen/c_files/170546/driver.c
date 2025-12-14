#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-19196;
int var_4 = -1546070801;
unsigned short var_6 = (unsigned short)51645;
unsigned short var_8 = (unsigned short)27902;
unsigned int var_10 = 1227459383U;
unsigned char var_11 = (unsigned char)121;
int zero = 0;
int var_12 = -1791977754;
int var_13 = 1791010396;
int var_14 = -1868154650;
unsigned int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 988346508U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
