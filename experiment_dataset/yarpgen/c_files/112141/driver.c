#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31323;
short var_1 = (short)-27575;
unsigned long long int var_7 = 5030315771594280937ULL;
unsigned int var_9 = 1337771114U;
short var_11 = (short)32199;
unsigned int var_15 = 3876145562U;
short var_16 = (short)-8359;
int zero = 0;
signed char var_18 = (signed char)-124;
short var_19 = (short)-16928;
unsigned short var_20 = (unsigned short)60312;
short var_21 = (short)8963;
void init() {
}

void checksum() {
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
