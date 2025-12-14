#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6708;
unsigned char var_4 = (unsigned char)151;
signed char var_6 = (signed char)84;
unsigned char var_10 = (unsigned char)70;
int zero = 0;
int var_13 = 1122113701;
unsigned long long int var_14 = 11263299324890890542ULL;
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
