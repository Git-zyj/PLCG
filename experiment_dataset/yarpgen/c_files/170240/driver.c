#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1386879268U;
long long int var_2 = -7591637373542494930LL;
unsigned short var_5 = (unsigned short)17401;
signed char var_6 = (signed char)64;
unsigned long long int var_11 = 7915972003593889633ULL;
unsigned short var_12 = (unsigned short)24448;
int zero = 0;
int var_13 = 1738839295;
unsigned char var_14 = (unsigned char)193;
unsigned short var_15 = (unsigned short)45839;
short var_16 = (short)19336;
short var_17 = (short)-27240;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
