#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17172422178424358395ULL;
unsigned int var_3 = 3811895140U;
short var_8 = (short)-11872;
unsigned short var_9 = (unsigned short)41926;
unsigned short var_10 = (unsigned short)18758;
unsigned int var_13 = 2776803888U;
int zero = 0;
unsigned long long int var_15 = 6235529423809739621ULL;
unsigned int var_16 = 2619854818U;
unsigned short var_17 = (unsigned short)1897;
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
