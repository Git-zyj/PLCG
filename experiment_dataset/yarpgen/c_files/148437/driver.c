#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1044253172;
unsigned long long int var_2 = 13941793401615062539ULL;
signed char var_3 = (signed char)-92;
int var_5 = -2025111039;
unsigned short var_6 = (unsigned short)37391;
unsigned char var_9 = (unsigned char)216;
int zero = 0;
unsigned int var_10 = 2145579965U;
unsigned int var_11 = 3968835294U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
