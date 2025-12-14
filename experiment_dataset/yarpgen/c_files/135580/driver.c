#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7745426491322214491LL;
int var_3 = -1981897425;
unsigned int var_4 = 3097339792U;
unsigned long long int var_6 = 17642830241263649786ULL;
short var_8 = (short)-7693;
long long int var_11 = 5138235601085484640LL;
long long int var_12 = -7906312351524014042LL;
int zero = 0;
unsigned int var_18 = 2838408462U;
long long int var_19 = -8527537262198078674LL;
unsigned int var_20 = 605547093U;
short var_21 = (short)31212;
signed char var_22 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
