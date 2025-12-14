#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8158683383970634413LL;
unsigned int var_1 = 171574788U;
short var_3 = (short)-26384;
signed char var_4 = (signed char)91;
signed char var_6 = (signed char)36;
signed char var_8 = (signed char)-3;
signed char var_9 = (signed char)-78;
unsigned short var_10 = (unsigned short)23506;
signed char var_14 = (signed char)-25;
long long int var_15 = 2459488396671147662LL;
int zero = 0;
unsigned short var_16 = (unsigned short)49299;
short var_17 = (short)-6354;
short var_18 = (short)-2454;
signed char var_19 = (signed char)32;
unsigned int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3178847207U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
