#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
unsigned char var_3 = (unsigned char)231;
int var_4 = -1400897371;
unsigned int var_7 = 3721667934U;
short var_11 = (short)-11482;
int zero = 0;
long long int var_13 = 7675185324890481480LL;
unsigned char var_14 = (unsigned char)136;
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
