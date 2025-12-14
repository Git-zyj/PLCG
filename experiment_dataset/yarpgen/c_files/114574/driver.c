#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12846;
long long int var_4 = -5834713716091877553LL;
long long int var_8 = 9209126294749646832LL;
int zero = 0;
long long int var_15 = 5200348079842987595LL;
short var_16 = (short)-23523;
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
