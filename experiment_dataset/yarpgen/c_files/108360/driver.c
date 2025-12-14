#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)254;
unsigned long long int var_6 = 6103704936875743615ULL;
unsigned char var_7 = (unsigned char)10;
short var_9 = (short)27244;
int zero = 0;
unsigned char var_14 = (unsigned char)169;
unsigned short var_15 = (unsigned short)18270;
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
