#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8476650178037411917LL;
unsigned int var_6 = 795991300U;
long long int var_9 = -9058327624356771522LL;
int zero = 0;
unsigned short var_17 = (unsigned short)42634;
unsigned short var_18 = (unsigned short)65409;
unsigned char var_19 = (unsigned char)72;
long long int var_20 = 3563771828283955751LL;
unsigned char arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)182;
}

void checksum() {
    hash(&seed, var_17);
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
