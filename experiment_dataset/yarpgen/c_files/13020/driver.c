#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47483;
unsigned int var_4 = 2912510867U;
_Bool var_7 = (_Bool)0;
unsigned short var_11 = (unsigned short)7460;
int zero = 0;
signed char var_12 = (signed char)-72;
signed char var_13 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
