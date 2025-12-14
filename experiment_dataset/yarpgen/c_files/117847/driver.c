#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
signed char var_2 = (signed char)-83;
unsigned char var_3 = (unsigned char)118;
unsigned long long int var_12 = 17416234550334390225ULL;
unsigned short var_14 = (unsigned short)58839;
int zero = 0;
unsigned short var_16 = (unsigned short)49904;
unsigned char var_17 = (unsigned char)253;
unsigned short var_18 = (unsigned short)33083;
unsigned long long int var_19 = 1399519546468026669ULL;
unsigned short var_20 = (unsigned short)51747;
short var_21 = (short)-15039;
unsigned int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 3987525242U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
