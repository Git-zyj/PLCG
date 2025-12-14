#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 500951583;
int var_7 = 1648109822;
unsigned int var_10 = 3996515028U;
int zero = 0;
short var_19 = (short)5957;
short var_20 = (short)-15720;
unsigned long long int var_21 = 16144148092520414081ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
