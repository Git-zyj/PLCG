#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)44;
unsigned long long int var_5 = 5211911479016830546ULL;
unsigned short var_9 = (unsigned short)61972;
int var_10 = -1506818392;
signed char var_11 = (signed char)19;
int zero = 0;
int var_15 = 1989375421;
unsigned int var_16 = 162079343U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
