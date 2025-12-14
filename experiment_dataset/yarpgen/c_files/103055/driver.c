#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)46;
unsigned short var_4 = (unsigned short)18340;
long long int var_15 = 4026851198570228486LL;
int zero = 0;
unsigned short var_17 = (unsigned short)7959;
unsigned char var_18 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
