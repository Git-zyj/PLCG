#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7951619079998055790LL;
unsigned int var_5 = 1054536314U;
unsigned short var_9 = (unsigned short)21417;
unsigned short var_16 = (unsigned short)6725;
int zero = 0;
long long int var_18 = 3697788299067424810LL;
short var_19 = (short)6424;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
