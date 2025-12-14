#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
long long int var_3 = 8061841613823304706LL;
signed char var_6 = (signed char)-127;
short var_7 = (short)-22238;
signed char var_12 = (signed char)85;
short var_15 = (short)1459;
int zero = 0;
long long int var_19 = -1377461214506890937LL;
long long int var_20 = 6417241355844623066LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
