#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49964;
long long int var_3 = 4734875184326515137LL;
unsigned short var_8 = (unsigned short)45368;
short var_10 = (short)-7957;
short var_14 = (short)15873;
unsigned char var_18 = (unsigned char)158;
int zero = 0;
unsigned char var_19 = (unsigned char)103;
unsigned short var_20 = (unsigned short)63612;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
