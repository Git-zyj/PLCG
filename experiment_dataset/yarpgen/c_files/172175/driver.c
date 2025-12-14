#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
signed char var_1 = (signed char)64;
signed char var_3 = (signed char)108;
unsigned short var_7 = (unsigned short)36545;
int zero = 0;
unsigned long long int var_11 = 2612292828057589327ULL;
int var_12 = -1231155403;
unsigned int var_13 = 2435416003U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
