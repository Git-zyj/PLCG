#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56579;
short var_3 = (short)30902;
int var_5 = 623955147;
short var_6 = (short)-25176;
unsigned long long int var_8 = 2808661294656789524ULL;
unsigned char var_11 = (unsigned char)237;
long long int var_12 = 5507178000810097630LL;
int zero = 0;
int var_14 = -1528099247;
unsigned long long int var_15 = 1788310944506967824ULL;
long long int var_16 = -6498457380402576571LL;
void init() {
}

void checksum() {
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
