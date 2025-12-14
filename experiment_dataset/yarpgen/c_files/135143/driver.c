#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12086604713614651368ULL;
int var_9 = 1622404879;
unsigned short var_11 = (unsigned short)59479;
int zero = 0;
int var_15 = 1129477863;
unsigned char var_16 = (unsigned char)226;
unsigned short var_17 = (unsigned short)39441;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
