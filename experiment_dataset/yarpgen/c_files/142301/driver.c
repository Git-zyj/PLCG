#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22435;
signed char var_1 = (signed char)23;
unsigned int var_3 = 1254976427U;
unsigned long long int var_6 = 8059533350037265543ULL;
unsigned short var_7 = (unsigned short)18858;
unsigned short var_9 = (unsigned short)52440;
int zero = 0;
short var_11 = (short)-28659;
short var_12 = (short)26012;
unsigned int var_13 = 402775726U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
