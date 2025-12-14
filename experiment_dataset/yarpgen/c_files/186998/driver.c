#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 226345107615017938ULL;
long long int var_3 = 8554083285283053935LL;
short var_5 = (short)-14072;
short var_9 = (short)-31794;
short var_12 = (short)-2524;
unsigned short var_14 = (unsigned short)30816;
unsigned short var_15 = (unsigned short)49109;
int zero = 0;
short var_17 = (short)-26695;
unsigned long long int var_18 = 2114730049701734280ULL;
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
