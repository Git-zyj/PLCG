#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-70;
unsigned int var_9 = 3304914530U;
long long int var_11 = 3430889466769702139LL;
int zero = 0;
unsigned short var_14 = (unsigned short)35684;
_Bool var_15 = (_Bool)1;
long long int var_16 = -6459892459172264931LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
