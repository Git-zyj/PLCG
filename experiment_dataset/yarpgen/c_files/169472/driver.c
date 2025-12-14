#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-31469;
unsigned char var_4 = (unsigned char)115;
unsigned long long int var_9 = 11962509589044086468ULL;
signed char var_11 = (signed char)-83;
int zero = 0;
signed char var_13 = (signed char)2;
long long int var_14 = 6044164444904663133LL;
signed char var_15 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
