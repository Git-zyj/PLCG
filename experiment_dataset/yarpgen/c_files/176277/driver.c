#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)57372;
unsigned short var_4 = (unsigned short)38111;
unsigned int var_9 = 2408594543U;
signed char var_11 = (signed char)-111;
int zero = 0;
int var_13 = -1371797211;
unsigned int var_14 = 93883071U;
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
