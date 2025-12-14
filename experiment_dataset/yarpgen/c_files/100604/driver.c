#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1696774642;
int var_2 = -1390472696;
int var_3 = 34000219;
int var_4 = 1248559133;
unsigned short var_6 = (unsigned short)20873;
unsigned short var_7 = (unsigned short)48634;
unsigned short var_8 = (unsigned short)37350;
unsigned short var_9 = (unsigned short)62580;
int var_10 = 2030478751;
unsigned short var_11 = (unsigned short)53161;
int zero = 0;
unsigned short var_13 = (unsigned short)1228;
int var_14 = 1663146719;
int var_15 = -1407769875;
unsigned short var_16 = (unsigned short)61466;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
