#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-89;
unsigned int var_2 = 1107428171U;
int var_4 = 509427420;
int var_5 = 879058153;
unsigned int var_7 = 2042347717U;
int zero = 0;
unsigned char var_11 = (unsigned char)109;
int var_12 = -476535834;
void init() {
}

void checksum() {
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
