#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)136;
unsigned char var_12 = (unsigned char)151;
unsigned long long int var_14 = 10288308498097842199ULL;
unsigned char var_15 = (unsigned char)82;
int zero = 0;
unsigned char var_17 = (unsigned char)34;
unsigned char var_18 = (unsigned char)57;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
