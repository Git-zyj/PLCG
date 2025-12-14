#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1076214214;
int var_6 = 1137444674;
unsigned int var_7 = 2548484418U;
_Bool var_8 = (_Bool)1;
int var_9 = -1747920572;
short var_12 = (short)-12642;
unsigned long long int var_16 = 16259375161234449521ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)28273;
unsigned short var_20 = (unsigned short)65328;
int var_21 = 2139107784;
long long int var_22 = 8036878501763551472LL;
void init() {
}

void checksum() {
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
