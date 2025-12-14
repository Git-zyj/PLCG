#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13796355616915482972ULL;
unsigned char var_5 = (unsigned char)188;
unsigned short var_9 = (unsigned short)17845;
int zero = 0;
short var_13 = (short)-477;
unsigned long long int var_14 = 11052236664636707626ULL;
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
