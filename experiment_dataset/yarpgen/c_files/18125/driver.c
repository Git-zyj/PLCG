#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1155421346U;
short var_6 = (short)-16609;
signed char var_9 = (signed char)52;
int zero = 0;
int var_11 = 879471113;
unsigned long long int var_12 = 4996394217073547601ULL;
long long int var_13 = 4972504825271154710LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
