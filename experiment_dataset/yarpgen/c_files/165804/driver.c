#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 664277392476097987LL;
long long int var_4 = 4705493487101374084LL;
unsigned char var_7 = (unsigned char)236;
int zero = 0;
signed char var_10 = (signed char)44;
signed char var_11 = (signed char)60;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
