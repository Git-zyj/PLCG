#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5261043131737008878ULL;
short var_2 = (short)-31409;
unsigned short var_4 = (unsigned short)49055;
long long int var_9 = 5815662045310517298LL;
int zero = 0;
unsigned short var_11 = (unsigned short)21667;
int var_12 = 494843927;
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
