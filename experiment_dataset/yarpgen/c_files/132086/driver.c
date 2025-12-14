#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4599064684753456539LL;
unsigned long long int var_2 = 7138555313770679385ULL;
int var_6 = -1553025136;
unsigned char var_9 = (unsigned char)104;
int zero = 0;
unsigned short var_10 = (unsigned short)36094;
unsigned int var_11 = 1681950017U;
unsigned short var_12 = (unsigned short)3527;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
