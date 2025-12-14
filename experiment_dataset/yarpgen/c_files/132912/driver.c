#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -862133044;
signed char var_5 = (signed char)26;
long long int var_6 = 8823353468687280050LL;
long long int var_7 = -8886592215338056625LL;
int var_9 = 1790133353;
int var_11 = 154253473;
unsigned short var_13 = (unsigned short)29241;
int zero = 0;
unsigned long long int var_16 = 10434568303116300774ULL;
unsigned long long int var_17 = 4688742601619808922ULL;
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
