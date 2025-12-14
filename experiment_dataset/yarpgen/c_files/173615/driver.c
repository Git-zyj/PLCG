#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31612;
signed char var_2 = (signed char)118;
unsigned char var_3 = (unsigned char)230;
unsigned short var_10 = (unsigned short)16383;
int zero = 0;
signed char var_12 = (signed char)-98;
unsigned short var_13 = (unsigned short)632;
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
