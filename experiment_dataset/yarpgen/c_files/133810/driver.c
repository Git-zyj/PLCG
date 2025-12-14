#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8255117211187714373LL;
unsigned char var_10 = (unsigned char)242;
int var_11 = -150532030;
signed char var_15 = (signed char)-77;
int zero = 0;
signed char var_17 = (signed char)104;
unsigned char var_18 = (unsigned char)45;
unsigned int var_19 = 4160469548U;
unsigned char var_20 = (unsigned char)125;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
