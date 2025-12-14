#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10920374394371035066ULL;
signed char var_7 = (signed char)19;
unsigned short var_9 = (unsigned short)47310;
signed char var_11 = (signed char)-41;
unsigned short var_14 = (unsigned short)36547;
int zero = 0;
long long int var_17 = -808125567385679032LL;
unsigned short var_18 = (unsigned short)60753;
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
