#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7423945397876189326LL;
unsigned char var_3 = (unsigned char)82;
unsigned short var_4 = (unsigned short)175;
long long int var_5 = -1132809577089919108LL;
unsigned short var_7 = (unsigned short)21613;
unsigned long long int var_8 = 11633683778514093323ULL;
unsigned char var_9 = (unsigned char)234;
unsigned long long int var_10 = 12115629421591758741ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)8927;
unsigned long long int var_13 = 6876475149894167820ULL;
void init() {
}

void checksum() {
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
