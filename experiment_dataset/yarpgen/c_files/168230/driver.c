#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)14271;
long long int var_18 = 115529074755563475LL;
long long int var_19 = 3662887663450992157LL;
int zero = 0;
unsigned long long int var_20 = 17424750559559882306ULL;
int var_21 = 270608787;
short var_22 = (short)25253;
signed char var_23 = (signed char)-3;
unsigned long long int var_24 = 16844207579514017904ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
