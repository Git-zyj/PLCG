#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
long long int var_6 = -2251821658149684600LL;
unsigned long long int var_9 = 13155615078926342522ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)13499;
unsigned int var_11 = 3193071806U;
int var_12 = -12505920;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
