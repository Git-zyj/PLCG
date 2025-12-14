#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 265527485U;
unsigned char var_6 = (unsigned char)220;
signed char var_18 = (signed char)-19;
int zero = 0;
signed char var_19 = (signed char)-57;
unsigned int var_20 = 3159174026U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
