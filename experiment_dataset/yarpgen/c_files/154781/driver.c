#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10792;
short var_3 = (short)-1869;
signed char var_7 = (signed char)60;
int var_8 = -1293585946;
unsigned short var_11 = (unsigned short)6886;
unsigned long long int var_17 = 12662412432743057006ULL;
unsigned long long int var_19 = 15007492249750374950ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)32540;
long long int var_21 = -4009280083022457738LL;
short var_22 = (short)-9980;
int var_23 = -655623327;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
