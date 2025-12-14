#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
signed char var_6 = (signed char)26;
unsigned char var_7 = (unsigned char)65;
int zero = 0;
unsigned char var_17 = (unsigned char)229;
int var_18 = -841554663;
unsigned char var_19 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
