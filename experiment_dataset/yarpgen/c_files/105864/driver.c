#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 282876910;
short var_3 = (short)-13664;
signed char var_7 = (signed char)-37;
unsigned long long int var_15 = 17989501562791928968ULL;
int zero = 0;
signed char var_16 = (signed char)-125;
unsigned long long int var_17 = 11322973190244843214ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
