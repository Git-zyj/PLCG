#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)125;
unsigned long long int var_4 = 12094295329624508840ULL;
unsigned long long int var_6 = 1575461358873492994ULL;
unsigned short var_10 = (unsigned short)36496;
int zero = 0;
signed char var_16 = (signed char)35;
signed char var_17 = (signed char)-55;
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
