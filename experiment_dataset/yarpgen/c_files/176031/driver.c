#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30654;
long long int var_2 = -5476865403742424924LL;
short var_8 = (short)25278;
signed char var_11 = (signed char)5;
int zero = 0;
unsigned long long int var_15 = 13459977722811558447ULL;
unsigned short var_16 = (unsigned short)52774;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
