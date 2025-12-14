#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14058;
unsigned short var_5 = (unsigned short)46701;
short var_7 = (short)-10015;
unsigned char var_9 = (unsigned char)240;
unsigned char var_10 = (unsigned char)255;
long long int var_11 = -5741659797398507354LL;
int zero = 0;
signed char var_12 = (signed char)80;
int var_13 = -1367567533;
short var_14 = (short)-27776;
unsigned short var_15 = (unsigned short)8631;
unsigned short var_16 = (unsigned short)52428;
long long int var_17 = -8788184840553285606LL;
unsigned int arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 694905659U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
