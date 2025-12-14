#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4989180392156166906LL;
short var_1 = (short)14998;
unsigned char var_4 = (unsigned char)22;
unsigned long long int var_6 = 10760593121593077876ULL;
unsigned long long int var_8 = 395254684391839511ULL;
int zero = 0;
int var_12 = 1241735497;
unsigned short var_13 = (unsigned short)26456;
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
