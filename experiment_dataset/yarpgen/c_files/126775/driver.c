#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13277391310030358374ULL;
signed char var_1 = (signed char)87;
unsigned long long int var_3 = 2843655679200604465ULL;
unsigned long long int var_6 = 18416513405128369600ULL;
short var_7 = (short)-3489;
short var_8 = (short)-7511;
short var_9 = (short)25140;
short var_10 = (short)-12598;
unsigned long long int var_11 = 13458683468560789034ULL;
unsigned long long int var_13 = 17089665966949977100ULL;
short var_14 = (short)17064;
int zero = 0;
signed char var_16 = (signed char)-86;
short var_17 = (short)26798;
short var_18 = (short)-25128;
unsigned long long int var_19 = 3383912188492257656ULL;
void init() {
}

void checksum() {
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
