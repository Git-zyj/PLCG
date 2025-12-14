#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)24289;
unsigned long long int var_7 = 13290900292923328339ULL;
short var_9 = (short)23261;
unsigned short var_10 = (unsigned short)38720;
short var_11 = (short)17791;
int zero = 0;
unsigned long long int var_12 = 3135115119023400841ULL;
long long int var_13 = 6464773269480047543LL;
unsigned char var_14 = (unsigned char)180;
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
