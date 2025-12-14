#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)240;
unsigned char var_7 = (unsigned char)104;
unsigned int var_8 = 492416279U;
unsigned char var_11 = (unsigned char)149;
int zero = 0;
unsigned int var_14 = 2947945810U;
long long int var_15 = 4271315097575886726LL;
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
