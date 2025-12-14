#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1115360933;
unsigned char var_7 = (unsigned char)32;
unsigned int var_9 = 448832778U;
long long int var_10 = -4366753822592676855LL;
int zero = 0;
unsigned short var_11 = (unsigned short)20269;
unsigned char var_12 = (unsigned char)25;
void init() {
}

void checksum() {
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
