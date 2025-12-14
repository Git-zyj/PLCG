#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1201996580;
short var_4 = (short)-1655;
unsigned int var_5 = 3445015376U;
int var_11 = 1413049616;
unsigned int var_13 = 2939494789U;
int zero = 0;
long long int var_14 = -397431334885412532LL;
unsigned char var_15 = (unsigned char)144;
long long int var_16 = -971929639580196584LL;
long long int var_17 = 7808424939048238754LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
