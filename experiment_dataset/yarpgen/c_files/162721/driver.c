#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10822;
signed char var_3 = (signed char)25;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)108;
unsigned char var_9 = (unsigned char)194;
unsigned int var_10 = 3517814495U;
short var_11 = (short)32205;
int zero = 0;
unsigned int var_15 = 2886726491U;
unsigned long long int var_16 = 4182656375551202840ULL;
unsigned long long int var_17 = 4150376654014794738ULL;
short var_18 = (short)-16889;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
