#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1740998208980166273LL;
unsigned long long int var_4 = 17168203956478607250ULL;
unsigned short var_7 = (unsigned short)4514;
unsigned short var_9 = (unsigned short)10627;
unsigned int var_11 = 2561013664U;
int zero = 0;
signed char var_15 = (signed char)-107;
signed char var_16 = (signed char)88;
short var_17 = (short)-27990;
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
