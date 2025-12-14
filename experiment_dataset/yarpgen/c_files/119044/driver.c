#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8340111409630080100ULL;
short var_1 = (short)3697;
unsigned char var_2 = (unsigned char)189;
short var_4 = (short)-8210;
unsigned long long int var_5 = 357736926467281491ULL;
unsigned long long int var_8 = 1629528863115838836ULL;
short var_9 = (short)-27417;
short var_13 = (short)-3564;
int zero = 0;
long long int var_15 = -7899717999767581074LL;
unsigned short var_16 = (unsigned short)38168;
unsigned char var_17 = (unsigned char)116;
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
