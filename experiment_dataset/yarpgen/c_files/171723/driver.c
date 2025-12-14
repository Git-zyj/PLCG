#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1558909630;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-25530;
unsigned long long int var_6 = 18098464264278580692ULL;
unsigned char var_9 = (unsigned char)207;
int zero = 0;
unsigned short var_13 = (unsigned short)56644;
unsigned char var_14 = (unsigned char)188;
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
