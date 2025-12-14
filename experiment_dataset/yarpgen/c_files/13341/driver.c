#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1150985445;
long long int var_2 = -5057598589862040757LL;
unsigned char var_3 = (unsigned char)160;
signed char var_7 = (signed char)-126;
unsigned char var_9 = (unsigned char)183;
short var_12 = (short)-27314;
signed char var_13 = (signed char)64;
int zero = 0;
unsigned long long int var_20 = 9690774166858613378ULL;
short var_21 = (short)-18951;
unsigned int var_22 = 2246545962U;
signed char var_23 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
