#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2809777443976892257LL;
long long int var_4 = -8807223080710496112LL;
unsigned int var_8 = 289968636U;
unsigned int var_9 = 2820240545U;
unsigned int var_11 = 3055107050U;
int zero = 0;
unsigned short var_12 = (unsigned short)41995;
unsigned int var_13 = 2553211907U;
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
