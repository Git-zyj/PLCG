#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10678373609306826351ULL;
signed char var_2 = (signed char)37;
unsigned int var_7 = 930389803U;
int zero = 0;
unsigned short var_11 = (unsigned short)5739;
signed char var_12 = (signed char)70;
int var_13 = 222418042;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
