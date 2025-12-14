#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
long long int var_6 = 5172437975403154157LL;
signed char var_8 = (signed char)118;
int zero = 0;
signed char var_13 = (signed char)-97;
long long int var_14 = -3382977917047616229LL;
unsigned char var_15 = (unsigned char)163;
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
