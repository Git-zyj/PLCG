#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 350992724156117792ULL;
int var_9 = 736292312;
int zero = 0;
unsigned long long int var_12 = 1740148692217969155ULL;
int var_13 = -1219866214;
short var_14 = (short)-11151;
unsigned long long int var_15 = 8332826465357438754ULL;
unsigned long long int var_16 = 13540248329468425133ULL;
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
