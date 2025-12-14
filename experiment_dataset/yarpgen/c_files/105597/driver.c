#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4017827149766364260LL;
short var_2 = (short)28309;
unsigned long long int var_5 = 13593953529098804107ULL;
short var_9 = (short)-25131;
long long int var_13 = 3921966778347621225LL;
int zero = 0;
unsigned int var_15 = 222495679U;
unsigned int var_16 = 1633760524U;
int var_17 = 97781725;
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
