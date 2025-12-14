#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2190277458052314000LL;
int var_7 = -692291020;
unsigned char var_8 = (unsigned char)123;
unsigned long long int var_9 = 3610588898433374639ULL;
short var_10 = (short)25100;
int zero = 0;
long long int var_12 = 8640013352119712148LL;
long long int var_13 = -6406925252214497204LL;
unsigned char var_14 = (unsigned char)176;
signed char var_15 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
