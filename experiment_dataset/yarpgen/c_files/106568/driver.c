#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)24;
unsigned char var_3 = (unsigned char)16;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)18869;
unsigned int var_9 = 1762783493U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 1711920538411413607ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1051614914U;
unsigned int var_15 = 463120317U;
short var_16 = (short)-17934;
unsigned int var_17 = 785284635U;
_Bool arr_0 [22] ;
unsigned int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 506226888U;
}

void checksum() {
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
