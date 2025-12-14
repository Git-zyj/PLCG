#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4153383805U;
signed char var_4 = (signed char)59;
unsigned long long int var_5 = 16516614598533235029ULL;
unsigned char var_6 = (unsigned char)35;
signed char var_7 = (signed char)91;
int zero = 0;
short var_10 = (short)27349;
unsigned long long int var_11 = 4476418607214577066ULL;
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
