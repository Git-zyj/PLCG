#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)11964;
unsigned long long int var_12 = 6051383073195673297ULL;
unsigned int var_15 = 3647899675U;
int zero = 0;
unsigned short var_16 = (unsigned short)35285;
short var_17 = (short)-18249;
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
