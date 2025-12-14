#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59947;
signed char var_7 = (signed char)90;
int var_9 = 1296500515;
signed char var_13 = (signed char)48;
unsigned char var_14 = (unsigned char)43;
int zero = 0;
unsigned long long int var_15 = 17735551899541221623ULL;
short var_16 = (short)25099;
void init() {
}

void checksum() {
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
