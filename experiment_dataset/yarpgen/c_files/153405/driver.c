#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 805588609U;
unsigned short var_7 = (unsigned short)20594;
unsigned short var_9 = (unsigned short)45092;
unsigned long long int var_10 = 8332829350686736102ULL;
int zero = 0;
unsigned long long int var_16 = 7802384492805883524ULL;
unsigned long long int var_17 = 4518475973627311747ULL;
unsigned long long int var_18 = 7075296678818260306ULL;
long long int arr_0 [16] [16] ;
unsigned char arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 7980479744564992395LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)49;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
