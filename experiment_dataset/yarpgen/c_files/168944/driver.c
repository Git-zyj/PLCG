#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
unsigned char var_1 = (unsigned char)23;
unsigned int var_10 = 609167589U;
unsigned int var_11 = 4280053088U;
int zero = 0;
unsigned char var_17 = (unsigned char)182;
unsigned int var_18 = 1722432851U;
unsigned char var_19 = (unsigned char)31;
long long int var_20 = 3023207570190746665LL;
long long int var_21 = -3970321117907877109LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
