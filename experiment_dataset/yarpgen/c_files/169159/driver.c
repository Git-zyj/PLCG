#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -2044019899;
unsigned char var_12 = (unsigned char)213;
short var_17 = (short)-10334;
int zero = 0;
unsigned char var_19 = (unsigned char)156;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 4276287433U;
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
