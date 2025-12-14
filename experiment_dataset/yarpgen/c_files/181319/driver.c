#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)29;
short var_6 = (short)-31226;
unsigned long long int var_8 = 9554578688259575268ULL;
short var_9 = (short)-21177;
long long int var_10 = 927792418026786549LL;
unsigned int var_12 = 3664348588U;
short var_13 = (short)31239;
signed char var_15 = (signed char)-117;
unsigned int var_16 = 1236358494U;
unsigned int var_17 = 3972487105U;
int zero = 0;
unsigned long long int var_19 = 13297808835839655651ULL;
int var_20 = 1297895068;
long long int var_21 = -7496184876960722956LL;
unsigned long long int var_22 = 17400685694138096167ULL;
short var_23 = (short)25217;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
