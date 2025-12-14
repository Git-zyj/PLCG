#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-80;
int var_3 = 761067533;
unsigned char var_8 = (unsigned char)184;
int var_9 = 199386747;
long long int var_12 = 6368868932409207586LL;
int zero = 0;
unsigned long long int var_20 = 2824861436578125703ULL;
unsigned long long int var_21 = 8394048461368998057ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
