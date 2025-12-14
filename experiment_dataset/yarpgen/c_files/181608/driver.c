#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
short var_2 = (short)-8113;
unsigned long long int var_4 = 11956292917991959687ULL;
unsigned long long int var_5 = 4999494965980274785ULL;
unsigned long long int var_7 = 14317997270783554858ULL;
int var_8 = 1335252363;
int zero = 0;
short var_11 = (short)-13595;
unsigned short var_12 = (unsigned short)44718;
unsigned char var_13 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
