#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20204;
int var_1 = 499664752;
unsigned int var_6 = 2443940724U;
int var_7 = -1272468011;
unsigned int var_8 = 2522062484U;
int var_9 = 1118180498;
unsigned int var_11 = 2818746679U;
short var_13 = (short)26458;
unsigned int var_15 = 947765038U;
unsigned int var_16 = 244226811U;
int zero = 0;
int var_17 = 780869428;
unsigned int var_18 = 137202959U;
void init() {
}

void checksum() {
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
