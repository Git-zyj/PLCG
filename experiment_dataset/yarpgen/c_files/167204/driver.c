#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62645;
short var_2 = (short)-26286;
unsigned long long int var_12 = 10807069373935784162ULL;
int zero = 0;
long long int var_13 = 6222555242814868580LL;
unsigned long long int var_14 = 16527257826456382347ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
