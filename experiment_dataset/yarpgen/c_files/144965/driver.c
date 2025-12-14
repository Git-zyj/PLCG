#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1011417040;
unsigned int var_3 = 968445039U;
int var_6 = -1859998108;
short var_9 = (short)-7179;
int zero = 0;
unsigned short var_10 = (unsigned short)59605;
unsigned long long int var_11 = 3434185739283237084ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
