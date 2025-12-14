#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-122;
unsigned long long int var_2 = 1583840337834478379ULL;
long long int var_3 = -1418042923052230197LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 21823891U;
unsigned short var_16 = (unsigned short)37682;
unsigned int var_17 = 2122462603U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
