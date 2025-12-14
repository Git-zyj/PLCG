#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1651779870;
long long int var_7 = -7457840934229395358LL;
unsigned char var_8 = (unsigned char)249;
short var_9 = (short)-27946;
unsigned int var_10 = 1867747090U;
int zero = 0;
unsigned short var_15 = (unsigned short)26748;
long long int var_16 = -8085336967167249272LL;
short var_17 = (short)4859;
unsigned long long int arr_0 [22] ;
long long int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 7660407097596025484ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -3619703683141686694LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
