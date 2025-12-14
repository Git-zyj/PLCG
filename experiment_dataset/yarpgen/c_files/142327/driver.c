#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7380334943901889717LL;
unsigned long long int var_2 = 571472258622740657ULL;
int var_6 = 1596781599;
unsigned short var_9 = (unsigned short)51613;
unsigned short var_12 = (unsigned short)45447;
long long int var_13 = -6034122668992831186LL;
short var_15 = (short)30566;
int zero = 0;
signed char var_17 = (signed char)-37;
long long int var_18 = 3067570436415877522LL;
unsigned char var_19 = (unsigned char)172;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
