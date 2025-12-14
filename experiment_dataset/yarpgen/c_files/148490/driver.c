#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16688280493271363454ULL;
signed char var_7 = (signed char)21;
long long int var_16 = 1169792119233758565LL;
short var_17 = (short)26857;
int zero = 0;
int var_18 = -496870433;
unsigned char var_19 = (unsigned char)238;
unsigned char var_20 = (unsigned char)131;
unsigned char var_21 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
