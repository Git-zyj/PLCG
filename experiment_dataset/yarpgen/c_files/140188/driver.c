#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -855361915;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 82027036U;
unsigned short var_9 = (unsigned short)31663;
signed char var_10 = (signed char)69;
int var_12 = 535798281;
int var_13 = 1443432004;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 14887831315143952165ULL;
long long int var_16 = 8441114326859943034LL;
unsigned int var_17 = 2253878047U;
int var_18 = 558156771;
long long int var_19 = 6450647808972829757LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
