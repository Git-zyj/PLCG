#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 67385897U;
unsigned long long int var_2 = 295708617846150367ULL;
long long int var_6 = -2738331347137957885LL;
unsigned short var_8 = (unsigned short)5431;
int var_11 = -221801910;
long long int var_13 = -1237164631923806727LL;
int zero = 0;
long long int var_20 = -6670677109997234193LL;
long long int var_21 = -7862038475174314493LL;
short var_22 = (short)-4881;
unsigned long long int var_23 = 1623971856481390532ULL;
void init() {
}

void checksum() {
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
