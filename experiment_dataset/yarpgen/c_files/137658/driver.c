#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
int var_1 = 499259108;
int var_2 = 361800111;
signed char var_5 = (signed char)-111;
unsigned char var_8 = (unsigned char)201;
int zero = 0;
int var_19 = -1739912319;
short var_20 = (short)-5139;
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
