#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -977285847;
unsigned short var_11 = (unsigned short)22227;
unsigned long long int var_14 = 16089962314105628252ULL;
unsigned short var_17 = (unsigned short)36791;
int zero = 0;
int var_18 = 1515978264;
unsigned char var_19 = (unsigned char)118;
unsigned int var_20 = 3927201549U;
unsigned int arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1654768861U;
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
