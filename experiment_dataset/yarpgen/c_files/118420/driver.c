#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33113;
unsigned char var_7 = (unsigned char)55;
int var_8 = 859272239;
signed char var_9 = (signed char)-85;
int zero = 0;
int var_18 = 604502134;
int var_19 = -732316523;
unsigned char var_20 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
