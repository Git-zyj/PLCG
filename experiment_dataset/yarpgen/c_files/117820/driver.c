#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 554534136U;
unsigned char var_7 = (unsigned char)62;
long long int var_9 = 1257519042795570868LL;
int zero = 0;
int var_13 = 2128824871;
unsigned long long int var_14 = 13133606816682373883ULL;
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
