#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -287982618727470462LL;
unsigned long long int var_2 = 14322116921400375334ULL;
int var_6 = 791930953;
unsigned short var_7 = (unsigned short)25551;
int var_9 = -1731407824;
short var_14 = (short)8118;
int zero = 0;
unsigned int var_15 = 542145028U;
int var_16 = -610228025;
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
