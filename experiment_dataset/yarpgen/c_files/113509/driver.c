#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2843001742U;
unsigned int var_3 = 4275136387U;
unsigned long long int var_6 = 5069760887243732664ULL;
long long int var_7 = 1887963327877645682LL;
unsigned short var_9 = (unsigned short)48385;
int zero = 0;
unsigned short var_13 = (unsigned short)28001;
unsigned long long int var_14 = 7622476470676500980ULL;
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
