#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)152;
unsigned long long int var_8 = 6083568855001663728ULL;
long long int var_9 = 7635827781382184650LL;
int zero = 0;
unsigned long long int var_11 = 9009571910686635317ULL;
unsigned char var_12 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
