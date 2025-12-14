#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1757846745;
unsigned long long int var_10 = 3532282916599729758ULL;
unsigned char var_14 = (unsigned char)80;
int zero = 0;
unsigned char var_18 = (unsigned char)225;
unsigned int var_19 = 538889625U;
unsigned short var_20 = (unsigned short)47401;
short var_21 = (short)-11606;
unsigned long long int var_22 = 14771506401427019144ULL;
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
