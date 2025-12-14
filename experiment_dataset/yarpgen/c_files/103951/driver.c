#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8705058120244206011LL;
int var_1 = -791203208;
unsigned long long int var_2 = 16280690729731629913ULL;
unsigned int var_4 = 2864181618U;
int zero = 0;
int var_12 = -1794296369;
unsigned long long int var_13 = 450426094028622730ULL;
unsigned short var_14 = (unsigned short)19584;
signed char var_15 = (signed char)119;
unsigned short var_16 = (unsigned short)35957;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
