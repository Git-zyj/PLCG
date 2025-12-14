#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)37;
signed char var_4 = (signed char)124;
long long int var_8 = -4211943412167765732LL;
long long int var_9 = -5651232676032879469LL;
int zero = 0;
unsigned short var_11 = (unsigned short)26200;
unsigned int var_12 = 1975659524U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
