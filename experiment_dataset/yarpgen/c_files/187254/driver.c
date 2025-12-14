#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1020645703;
short var_7 = (short)7137;
int var_9 = -1718515003;
unsigned char var_13 = (unsigned char)243;
int zero = 0;
short var_16 = (short)25464;
short var_17 = (short)30119;
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
