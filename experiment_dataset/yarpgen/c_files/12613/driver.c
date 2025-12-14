#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8295885136347444306LL;
unsigned int var_2 = 3891235157U;
signed char var_5 = (signed char)99;
unsigned short var_7 = (unsigned short)18960;
int zero = 0;
long long int var_12 = 8622055368904939350LL;
unsigned short var_13 = (unsigned short)53793;
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
