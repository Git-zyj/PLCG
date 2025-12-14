#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63417;
unsigned int var_8 = 3119278411U;
signed char var_9 = (signed char)102;
long long int var_10 = -4641447218849889974LL;
unsigned int var_11 = 3698049134U;
unsigned short var_17 = (unsigned short)2445;
unsigned int var_18 = 2286961404U;
int zero = 0;
short var_19 = (short)25055;
short var_20 = (short)14099;
unsigned short var_21 = (unsigned short)41924;
void init() {
}

void checksum() {
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
