#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-108;
short var_4 = (short)-21305;
int var_5 = -1619517083;
long long int var_7 = -3176063119139068494LL;
int zero = 0;
long long int var_11 = 3086859806588782804LL;
long long int var_12 = -924786657114268333LL;
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
