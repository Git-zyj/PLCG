#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27493;
unsigned long long int var_4 = 9878717861126295142ULL;
short var_6 = (short)-27703;
unsigned long long int var_15 = 14495058778733030992ULL;
int zero = 0;
short var_16 = (short)5640;
unsigned int var_17 = 1727473262U;
unsigned short var_18 = (unsigned short)12681;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
