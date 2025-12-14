#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3699817823U;
long long int var_1 = 6182981045147966516LL;
unsigned short var_2 = (unsigned short)21779;
unsigned long long int var_4 = 11937575544754180104ULL;
unsigned long long int var_5 = 12199820331109973739ULL;
unsigned int var_6 = 2781496875U;
unsigned long long int var_7 = 875025562784498587ULL;
unsigned int var_9 = 2025758712U;
int var_10 = -193757832;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)62377;
long long int var_14 = 4485532533455269319LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
