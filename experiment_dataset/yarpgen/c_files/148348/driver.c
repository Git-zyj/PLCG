#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_17 = (unsigned char)78;
int var_19 = -1757406529;
int zero = 0;
unsigned short var_20 = (unsigned short)37515;
long long int var_21 = 1557201726515194673LL;
long long int var_22 = -4529270729999363335LL;
short var_23 = (short)30424;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
