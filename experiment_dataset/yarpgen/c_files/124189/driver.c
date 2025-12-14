#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1224790910;
unsigned long long int var_4 = 10473750894621027498ULL;
int var_14 = 1153317787;
int zero = 0;
unsigned long long int var_20 = 14731299718219366452ULL;
long long int var_21 = 3002608598290398902LL;
signed char var_22 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
