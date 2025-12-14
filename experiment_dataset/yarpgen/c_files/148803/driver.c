#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6668295501068637248LL;
long long int var_7 = -7423999796835983602LL;
signed char var_12 = (signed char)-62;
int zero = 0;
unsigned char var_13 = (unsigned char)143;
unsigned long long int var_14 = 745733325627779356ULL;
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
