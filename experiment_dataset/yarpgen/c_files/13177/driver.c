#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2148022896926291072ULL;
unsigned short var_4 = (unsigned short)15420;
unsigned char var_6 = (unsigned char)108;
long long int var_8 = -2623967424593480571LL;
unsigned long long int var_12 = 2825164069723137753ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)9552;
unsigned short var_14 = (unsigned short)17141;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
