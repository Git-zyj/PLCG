#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2019;
signed char var_4 = (signed char)68;
unsigned long long int var_5 = 12486153192448246219ULL;
unsigned int var_6 = 2450116818U;
long long int var_7 = -4822770903051076201LL;
unsigned char var_9 = (unsigned char)181;
unsigned char var_10 = (unsigned char)2;
int zero = 0;
unsigned int var_13 = 3076136507U;
int var_14 = -165413213;
unsigned char var_15 = (unsigned char)181;
signed char var_16 = (signed char)123;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
