#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)17949;
unsigned int var_8 = 1751914325U;
int var_9 = 821465764;
unsigned char var_15 = (unsigned char)162;
int zero = 0;
signed char var_16 = (signed char)98;
unsigned short var_17 = (unsigned short)19591;
void init() {
}

void checksum() {
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
