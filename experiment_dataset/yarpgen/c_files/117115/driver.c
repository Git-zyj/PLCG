#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 391788353;
long long int var_4 = -1247097181642529976LL;
unsigned char var_6 = (unsigned char)229;
int var_8 = -1306869198;
unsigned char var_9 = (unsigned char)166;
unsigned char var_10 = (unsigned char)171;
int zero = 0;
unsigned char var_11 = (unsigned char)241;
unsigned int var_12 = 1570315836U;
unsigned int var_13 = 1554216569U;
void init() {
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
