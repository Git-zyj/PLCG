#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18137069801535671058ULL;
unsigned long long int var_2 = 10265740585165692758ULL;
unsigned long long int var_4 = 4459929331886105548ULL;
unsigned long long int var_5 = 2928531796246165498ULL;
int var_7 = 33557455;
long long int var_9 = -3436434335634192919LL;
int zero = 0;
unsigned long long int var_13 = 1626947279074606981ULL;
unsigned short var_14 = (unsigned short)51457;
unsigned short var_15 = (unsigned short)27198;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
