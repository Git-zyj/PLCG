#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1525294923U;
signed char var_3 = (signed char)-39;
unsigned char var_9 = (unsigned char)254;
unsigned short var_12 = (unsigned short)27173;
int zero = 0;
signed char var_18 = (signed char)-44;
short var_19 = (short)-17921;
int var_20 = -1071673928;
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
