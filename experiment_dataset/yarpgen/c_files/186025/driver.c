#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6242920810417989393LL;
unsigned long long int var_1 = 4683360734552870449ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 18177963420131313350ULL;
unsigned char var_12 = (unsigned char)150;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
