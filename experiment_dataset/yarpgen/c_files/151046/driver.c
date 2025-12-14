#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
long long int var_2 = -9053797908664598642LL;
unsigned int var_5 = 2403723729U;
unsigned char var_8 = (unsigned char)113;
unsigned short var_9 = (unsigned short)4102;
short var_10 = (short)-27931;
int zero = 0;
unsigned long long int var_12 = 5067713558482977000ULL;
unsigned int var_13 = 3806526657U;
signed char var_14 = (signed char)65;
short var_15 = (short)18383;
unsigned int var_16 = 3688697331U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
