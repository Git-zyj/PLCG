#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)199;
unsigned long long int var_8 = 2570492640469268665ULL;
unsigned short var_9 = (unsigned short)824;
int zero = 0;
unsigned short var_11 = (unsigned short)9719;
int var_12 = 370935441;
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
