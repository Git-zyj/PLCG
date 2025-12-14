#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
signed char var_2 = (signed char)-101;
int var_3 = -974148631;
signed char var_9 = (signed char)53;
unsigned int var_11 = 4262432664U;
int zero = 0;
unsigned char var_12 = (unsigned char)55;
int var_13 = -1951508561;
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
