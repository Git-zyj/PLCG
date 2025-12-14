#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3912248593U;
unsigned long long int var_13 = 17284947377623635644ULL;
unsigned short var_14 = (unsigned short)50107;
signed char var_15 = (signed char)-21;
int zero = 0;
unsigned char var_16 = (unsigned char)101;
unsigned int var_17 = 2261458161U;
unsigned long long int var_18 = 3729849009272737631ULL;
long long int arr_1 [24] ;
int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -3866225358212434355LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -2134998700;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
