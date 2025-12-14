#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3078122548338705773LL;
short var_6 = (short)20372;
short var_8 = (short)15679;
unsigned char var_11 = (unsigned char)180;
int var_12 = 1085351296;
int zero = 0;
int var_14 = -207600596;
short var_15 = (short)18949;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
