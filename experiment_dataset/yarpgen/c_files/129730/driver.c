#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1355422647;
unsigned char var_4 = (unsigned char)155;
short var_5 = (short)21079;
unsigned short var_12 = (unsigned short)64875;
int zero = 0;
unsigned long long int var_16 = 14206944471853466910ULL;
int var_17 = 376501550;
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
