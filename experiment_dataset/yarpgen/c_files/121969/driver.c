#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27832;
short var_1 = (short)20539;
_Bool var_2 = (_Bool)0;
unsigned char var_9 = (unsigned char)8;
int zero = 0;
unsigned long long int var_11 = 8119278764203134085ULL;
int var_12 = 2118419987;
unsigned long long int var_13 = 9577871597796487134ULL;
signed char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)98;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
