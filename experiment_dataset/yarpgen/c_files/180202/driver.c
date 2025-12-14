#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 219472599U;
unsigned long long int var_3 = 14127428681757886492ULL;
unsigned short var_8 = (unsigned short)4443;
signed char var_9 = (signed char)123;
int zero = 0;
unsigned short var_13 = (unsigned short)14199;
unsigned char var_14 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
