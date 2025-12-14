#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15362;
unsigned char var_3 = (unsigned char)82;
unsigned long long int var_4 = 1772168184542125715ULL;
unsigned int var_6 = 2435142571U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)33429;
short var_9 = (short)20743;
unsigned long long int var_11 = 12326674459945685120ULL;
unsigned long long int var_13 = 6742085540583478014ULL;
int zero = 0;
long long int var_15 = 2198658715716345882LL;
unsigned long long int var_16 = 4844516803273399239ULL;
short var_17 = (short)-27611;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
