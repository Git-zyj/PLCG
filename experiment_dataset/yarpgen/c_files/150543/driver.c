#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)1997;
unsigned char var_7 = (unsigned char)40;
long long int var_9 = -3404400351842822271LL;
unsigned short var_11 = (unsigned short)23595;
unsigned short var_13 = (unsigned short)61653;
int zero = 0;
unsigned long long int var_14 = 13688780259952610834ULL;
unsigned int var_15 = 2234222296U;
unsigned long long int var_16 = 13712268698996169076ULL;
unsigned int var_17 = 585496643U;
unsigned char arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)199;
}

void checksum() {
    hash(&seed, var_14);
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
