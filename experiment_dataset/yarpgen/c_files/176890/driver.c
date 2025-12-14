#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3382392896305197735LL;
unsigned long long int var_9 = 13683285182914184336ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)35495;
long long int var_21 = -7681734120314550629LL;
unsigned int var_22 = 2874439872U;
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
