#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62514;
unsigned short var_4 = (unsigned short)32751;
unsigned short var_7 = (unsigned short)25357;
long long int var_9 = 425869442504170967LL;
int zero = 0;
unsigned short var_13 = (unsigned short)6757;
unsigned char var_14 = (unsigned char)27;
unsigned char var_15 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
