#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)25336;
long long int var_4 = 1013395086573129978LL;
int zero = 0;
unsigned char var_15 = (unsigned char)153;
short var_16 = (short)-25092;
int var_17 = 52818667;
long long int var_18 = 4526190099914869282LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
