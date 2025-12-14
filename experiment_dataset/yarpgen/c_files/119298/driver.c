#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17815;
unsigned int var_3 = 3296930485U;
long long int var_4 = 91069037445155603LL;
unsigned short var_5 = (unsigned short)32872;
signed char var_7 = (signed char)8;
short var_10 = (short)23079;
unsigned char var_11 = (unsigned char)94;
signed char var_13 = (signed char)118;
int var_14 = 1736882328;
short var_16 = (short)-28363;
unsigned int var_17 = 3352215144U;
signed char var_18 = (signed char)85;
int zero = 0;
unsigned int var_19 = 2130295188U;
int var_20 = 2100854946;
short var_21 = (short)-8759;
short var_22 = (short)4893;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
