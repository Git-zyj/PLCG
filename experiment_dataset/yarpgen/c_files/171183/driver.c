#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1023433705;
unsigned short var_2 = (unsigned short)41047;
long long int var_3 = 2891493205040770939LL;
short var_4 = (short)30216;
unsigned int var_5 = 663224041U;
unsigned int var_6 = 522275785U;
signed char var_7 = (signed char)-116;
int var_9 = -225573237;
int zero = 0;
unsigned int var_11 = 2554587004U;
long long int var_12 = -8584254629232759682LL;
long long int var_13 = 9129572273457597866LL;
unsigned int var_14 = 2647648320U;
long long int var_15 = 6005831988539662315LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
