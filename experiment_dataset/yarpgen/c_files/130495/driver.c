#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)192;
short var_4 = (short)22596;
unsigned long long int var_6 = 13137292120286094531ULL;
signed char var_8 = (signed char)26;
int zero = 0;
signed char var_10 = (signed char)-116;
signed char var_11 = (signed char)-63;
unsigned long long int var_12 = 6751078582575301206ULL;
unsigned short var_13 = (unsigned short)3748;
long long int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1005018468145765641LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
