#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26949;
long long int var_2 = 7515402083894084238LL;
unsigned int var_5 = 731501884U;
short var_10 = (short)-3869;
int var_12 = 1815590087;
long long int var_13 = 3026805443916865480LL;
unsigned int var_14 = 1555183647U;
int zero = 0;
unsigned short var_16 = (unsigned short)43239;
unsigned char var_17 = (unsigned char)83;
void init() {
}

void checksum() {
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
