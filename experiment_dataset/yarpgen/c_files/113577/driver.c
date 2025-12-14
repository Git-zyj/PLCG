#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10485;
int var_8 = 675863042;
int var_9 = -346095178;
long long int var_10 = -2997099192771585474LL;
signed char var_17 = (signed char)-12;
unsigned char var_19 = (unsigned char)83;
int zero = 0;
int var_20 = -1720784421;
unsigned char var_21 = (unsigned char)132;
unsigned char var_22 = (unsigned char)19;
unsigned int var_23 = 2403673027U;
int var_24 = -139155257;
int arr_0 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? -17323535 : 1516132414;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
