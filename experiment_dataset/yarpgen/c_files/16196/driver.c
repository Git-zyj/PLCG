#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1042489426;
short var_11 = (short)-11618;
short var_12 = (short)-10848;
unsigned int var_16 = 469101191U;
int zero = 0;
unsigned long long int var_18 = 8521328884467442397ULL;
unsigned char var_19 = (unsigned char)207;
unsigned int var_20 = 884711355U;
signed char var_21 = (signed char)54;
unsigned short var_22 = (unsigned short)61425;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
