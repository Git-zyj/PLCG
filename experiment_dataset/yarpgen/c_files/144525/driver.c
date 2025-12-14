#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14186118747870088026ULL;
short var_3 = (short)-18164;
unsigned long long int var_4 = 1000450999553229267ULL;
short var_8 = (short)542;
short var_9 = (short)9535;
short var_16 = (short)15422;
int zero = 0;
short var_20 = (short)-26218;
long long int var_21 = 4219469336693805724LL;
void init() {
}

void checksum() {
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
