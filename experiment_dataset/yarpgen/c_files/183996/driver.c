#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-18;
short var_4 = (short)16730;
int var_7 = 1521561367;
unsigned long long int var_13 = 18138842035928944695ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)202;
int var_18 = 39407068;
unsigned char var_19 = (unsigned char)194;
short var_20 = (short)-1854;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
