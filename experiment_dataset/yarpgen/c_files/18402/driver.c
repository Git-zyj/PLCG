#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-101;
unsigned char var_7 = (unsigned char)236;
unsigned short var_9 = (unsigned short)39981;
int zero = 0;
unsigned long long int var_12 = 18214937702098846970ULL;
unsigned short var_13 = (unsigned short)46508;
void init() {
}

void checksum() {
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
