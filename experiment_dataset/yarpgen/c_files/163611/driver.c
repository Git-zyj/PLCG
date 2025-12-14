#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14608;
signed char var_1 = (signed char)-13;
short var_2 = (short)-17355;
unsigned short var_9 = (unsigned short)64867;
unsigned int var_11 = 865314551U;
short var_13 = (short)1103;
int var_15 = -231793954;
int zero = 0;
short var_18 = (short)-32641;
unsigned long long int var_19 = 870692395874284318ULL;
long long int var_20 = -2886373697922708639LL;
int var_21 = 462519654;
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
