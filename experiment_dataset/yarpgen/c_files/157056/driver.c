#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5054;
int var_2 = -1682101484;
unsigned char var_4 = (unsigned char)224;
signed char var_5 = (signed char)-53;
unsigned long long int var_10 = 17454968069277319466ULL;
signed char var_12 = (signed char)15;
unsigned int var_15 = 487310973U;
int zero = 0;
long long int var_20 = -113805089103638726LL;
unsigned short var_21 = (unsigned short)14853;
unsigned int var_22 = 3702212955U;
signed char var_23 = (signed char)-85;
signed char var_24 = (signed char)-80;
unsigned int var_25 = 3209958181U;
unsigned char var_26 = (unsigned char)168;
int var_27 = 410494910;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
