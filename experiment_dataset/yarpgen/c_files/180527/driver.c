#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
int var_1 = 1797237649;
unsigned int var_14 = 4031487183U;
int zero = 0;
unsigned char var_19 = (unsigned char)19;
signed char var_20 = (signed char)-103;
signed char var_21 = (signed char)-91;
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
