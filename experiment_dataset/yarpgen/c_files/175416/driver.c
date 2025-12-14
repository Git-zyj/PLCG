#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1231512494;
unsigned long long int var_3 = 7199576753935875254ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)124;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)29;
short var_12 = (short)-1801;
unsigned char var_13 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
