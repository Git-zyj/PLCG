#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30520;
unsigned long long int var_5 = 18146575442233491339ULL;
long long int var_6 = 5593998779394399250LL;
unsigned short var_8 = (unsigned short)30137;
int zero = 0;
unsigned int var_11 = 3210355714U;
short var_12 = (short)-1273;
int var_13 = -528855540;
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
