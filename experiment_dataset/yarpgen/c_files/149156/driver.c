#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29439;
signed char var_1 = (signed char)105;
long long int var_3 = 8956585392253891811LL;
short var_8 = (short)27038;
signed char var_9 = (signed char)-104;
unsigned int var_14 = 3146188150U;
int zero = 0;
long long int var_15 = 1879895846277468074LL;
short var_16 = (short)-14401;
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
