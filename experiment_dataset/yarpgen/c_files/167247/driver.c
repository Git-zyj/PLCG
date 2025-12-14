#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3163631906U;
unsigned char var_2 = (unsigned char)146;
unsigned char var_4 = (unsigned char)123;
unsigned char var_13 = (unsigned char)59;
unsigned char var_14 = (unsigned char)38;
int zero = 0;
unsigned long long int var_19 = 11370007278649816360ULL;
unsigned int var_20 = 3240160131U;
int var_21 = 1118618867;
unsigned long long int var_22 = 3175146878004869824ULL;
unsigned int var_23 = 1647566582U;
unsigned char arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)165;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
