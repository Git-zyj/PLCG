#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1761982467;
short var_8 = (short)16953;
unsigned char var_11 = (unsigned char)72;
long long int var_14 = 1547138390925977314LL;
int zero = 0;
signed char var_18 = (signed char)27;
signed char var_19 = (signed char)118;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
