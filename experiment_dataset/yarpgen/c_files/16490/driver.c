#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5788385748937510696LL;
unsigned short var_6 = (unsigned short)23651;
unsigned char var_7 = (unsigned char)21;
int zero = 0;
signed char var_13 = (signed char)35;
unsigned long long int var_14 = 9760475220284706622ULL;
void init() {
}

void checksum() {
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
