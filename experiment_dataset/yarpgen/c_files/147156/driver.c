#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)61794;
short var_5 = (short)-371;
unsigned short var_6 = (unsigned short)5564;
unsigned char var_7 = (unsigned char)111;
unsigned long long int var_8 = 7007078074456374589ULL;
signed char var_10 = (signed char)42;
unsigned long long int var_11 = 16169713104987706980ULL;
_Bool var_12 = (_Bool)1;
unsigned char var_15 = (unsigned char)103;
int zero = 0;
short var_16 = (short)9938;
unsigned int var_17 = 2874874339U;
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
