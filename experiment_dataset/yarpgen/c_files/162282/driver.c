#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3154892051293091603ULL;
long long int var_1 = -237521548409990893LL;
unsigned short var_4 = (unsigned short)27339;
short var_7 = (short)-19636;
unsigned long long int var_10 = 9966416689907862324ULL;
unsigned long long int var_13 = 8892378461771126063ULL;
unsigned short var_14 = (unsigned short)32036;
unsigned char var_15 = (unsigned char)143;
int zero = 0;
short var_16 = (short)-18303;
unsigned char var_17 = (unsigned char)219;
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
