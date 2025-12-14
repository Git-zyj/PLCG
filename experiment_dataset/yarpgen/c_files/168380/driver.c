#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
unsigned int var_3 = 212707675U;
signed char var_4 = (signed char)-68;
unsigned char var_10 = (unsigned char)230;
signed char var_16 = (signed char)3;
signed char var_17 = (signed char)52;
int zero = 0;
unsigned int var_19 = 3050560349U;
unsigned char var_20 = (unsigned char)131;
signed char var_21 = (signed char)120;
void init() {
}

void checksum() {
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
