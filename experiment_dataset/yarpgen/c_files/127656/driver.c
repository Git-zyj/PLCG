#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_6 = (signed char)85;
unsigned int var_7 = 567369060U;
short var_8 = (short)-25638;
int var_9 = 213468653;
int var_11 = -2111163707;
int zero = 0;
signed char var_12 = (signed char)-117;
unsigned int var_13 = 3442205824U;
int var_14 = 983880697;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
