#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)124;
signed char var_9 = (signed char)98;
long long int var_11 = -8758328373147598021LL;
int zero = 0;
short var_12 = (short)31805;
unsigned short var_13 = (unsigned short)59593;
int var_14 = 740418391;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
