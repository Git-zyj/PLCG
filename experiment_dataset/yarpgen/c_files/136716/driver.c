#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1227539906;
int var_5 = -689358967;
signed char var_9 = (signed char)-66;
unsigned char var_10 = (unsigned char)162;
int zero = 0;
short var_13 = (short)19992;
unsigned long long int var_14 = 1436919082767886449ULL;
int var_15 = -1615345209;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
