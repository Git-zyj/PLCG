#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-47;
unsigned int var_6 = 244117823U;
unsigned char var_7 = (unsigned char)46;
signed char var_8 = (signed char)122;
unsigned long long int var_9 = 16958810369451717252ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)14933;
unsigned char var_11 = (unsigned char)146;
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
