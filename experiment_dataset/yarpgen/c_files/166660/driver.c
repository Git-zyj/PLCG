#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58196;
signed char var_1 = (signed char)-102;
unsigned int var_5 = 2125328599U;
unsigned char var_7 = (unsigned char)44;
unsigned int var_9 = 3158520130U;
int zero = 0;
long long int var_10 = 8356575138160683749LL;
signed char var_11 = (signed char)55;
unsigned char var_12 = (unsigned char)249;
signed char var_13 = (signed char)19;
unsigned int var_14 = 3139243660U;
int arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -2043967779 : -2109686669;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
