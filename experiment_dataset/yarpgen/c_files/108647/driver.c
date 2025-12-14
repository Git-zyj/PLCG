#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-24;
signed char var_2 = (signed char)-55;
int var_7 = -1963082747;
unsigned int var_8 = 99148447U;
signed char var_15 = (signed char)104;
unsigned long long int var_16 = 16494140521502934011ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)130;
unsigned short var_19 = (unsigned short)10385;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
