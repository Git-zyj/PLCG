#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61160;
unsigned int var_1 = 2671542644U;
signed char var_4 = (signed char)119;
long long int var_5 = -5891889644718947667LL;
int zero = 0;
signed char var_11 = (signed char)-54;
int var_12 = -1944949308;
signed char var_13 = (signed char)-106;
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
