#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1411100677U;
unsigned short var_4 = (unsigned short)64741;
unsigned int var_5 = 3866389590U;
long long int var_9 = 6580334321385575576LL;
int zero = 0;
unsigned char var_14 = (unsigned char)49;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
