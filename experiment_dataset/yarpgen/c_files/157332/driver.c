#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11406;
unsigned short var_1 = (unsigned short)61572;
unsigned int var_2 = 2971621869U;
unsigned long long int var_4 = 1618349906810005168ULL;
signed char var_5 = (signed char)5;
unsigned long long int var_7 = 13975444915446854187ULL;
unsigned int var_8 = 2093183945U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 1063554679U;
long long int var_13 = 5236414309587469005LL;
short var_14 = (short)-23468;
unsigned long long int var_15 = 4860311065483070065ULL;
long long int var_16 = -985231457624515791LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
