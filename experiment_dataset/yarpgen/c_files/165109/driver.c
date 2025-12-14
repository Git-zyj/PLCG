#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)14;
unsigned char var_3 = (unsigned char)232;
short var_7 = (short)-8518;
int var_11 = 857758119;
long long int var_13 = 1975128868212695259LL;
int zero = 0;
short var_14 = (short)-1868;
unsigned long long int var_15 = 18393361313546098319ULL;
short var_16 = (short)-1386;
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
