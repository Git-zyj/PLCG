#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62994;
unsigned long long int var_1 = 1803274815286374292ULL;
unsigned long long int var_2 = 4500365794760577603ULL;
unsigned short var_4 = (unsigned short)51679;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)48408;
unsigned long long int var_7 = 6435964395188640830ULL;
short var_12 = (short)-32758;
int zero = 0;
unsigned short var_14 = (unsigned short)61422;
unsigned short var_15 = (unsigned short)5083;
unsigned long long int var_16 = 16882840936433717705ULL;
unsigned short var_17 = (unsigned short)27308;
unsigned long long int arr_0 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3889065510619381590ULL;
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
