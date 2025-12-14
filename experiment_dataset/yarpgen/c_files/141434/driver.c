#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)255;
signed char var_4 = (signed char)-4;
unsigned long long int var_11 = 7616896279882096716ULL;
unsigned long long int var_12 = 235203253215596056ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)227;
int var_15 = -991373664;
int var_16 = 730986715;
unsigned long long int var_17 = 11229440852672961840ULL;
signed char var_18 = (signed char)-2;
unsigned int var_19 = 2345220951U;
unsigned char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)226;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
