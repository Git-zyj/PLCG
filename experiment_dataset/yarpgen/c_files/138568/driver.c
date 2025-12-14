#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)108;
unsigned long long int var_8 = 4219327166122411376ULL;
unsigned char var_9 = (unsigned char)217;
short var_10 = (short)-27563;
unsigned char var_13 = (unsigned char)203;
int zero = 0;
unsigned char var_20 = (unsigned char)136;
short var_21 = (short)-2631;
unsigned short var_22 = (unsigned short)3505;
unsigned char var_23 = (unsigned char)29;
void init() {
}

void checksum() {
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
