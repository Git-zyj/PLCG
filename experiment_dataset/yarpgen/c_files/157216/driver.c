#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22038;
int var_7 = 505722040;
signed char var_9 = (signed char)13;
long long int var_11 = -3912680228317613867LL;
int zero = 0;
long long int var_20 = -70207904101750670LL;
int var_21 = 131988508;
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
