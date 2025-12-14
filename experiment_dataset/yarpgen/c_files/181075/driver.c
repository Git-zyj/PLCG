#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1479707824U;
signed char var_3 = (signed char)19;
int zero = 0;
long long int var_10 = -8907240120123247040LL;
unsigned char var_11 = (unsigned char)208;
unsigned short var_12 = (unsigned short)11057;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
