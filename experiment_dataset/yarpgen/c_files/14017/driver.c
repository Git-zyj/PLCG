#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 589589395U;
long long int var_2 = -281315932064549120LL;
long long int var_5 = -7742770371866601501LL;
long long int var_6 = -1318966959993804925LL;
short var_8 = (short)17554;
long long int var_10 = -7087882871924485670LL;
int zero = 0;
signed char var_12 = (signed char)35;
short var_13 = (short)-32568;
void init() {
}

void checksum() {
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
