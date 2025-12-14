#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45189;
unsigned short var_6 = (unsigned short)45479;
unsigned short var_8 = (unsigned short)64749;
unsigned short var_9 = (unsigned short)4699;
unsigned short var_10 = (unsigned short)25911;
int zero = 0;
unsigned short var_11 = (unsigned short)30776;
unsigned short var_12 = (unsigned short)49846;
unsigned short var_13 = (unsigned short)51319;
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
