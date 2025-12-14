#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2075899073U;
unsigned long long int var_2 = 1872672223250524944ULL;
unsigned short var_5 = (unsigned short)557;
long long int var_7 = 8850674367310505902LL;
signed char var_8 = (signed char)-71;
signed char var_9 = (signed char)115;
int zero = 0;
long long int var_12 = -5002729560414057801LL;
signed char var_13 = (signed char)97;
long long int var_14 = 4329022255310911819LL;
unsigned int var_15 = 2041139407U;
signed char arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-64 : (signed char)-45;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
