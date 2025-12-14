#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)0;
unsigned int var_2 = 427902646U;
unsigned int var_3 = 3319052371U;
int var_11 = 1470596989;
int zero = 0;
unsigned short var_12 = (unsigned short)23503;
long long int var_13 = 1481866576307787350LL;
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
