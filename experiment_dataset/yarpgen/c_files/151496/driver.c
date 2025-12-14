#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20596;
unsigned long long int var_3 = 8621860417663067210ULL;
short var_5 = (short)8436;
long long int var_8 = -8407780341713889306LL;
signed char var_9 = (signed char)-6;
int zero = 0;
long long int var_14 = 2739617767132273104LL;
unsigned char var_15 = (unsigned char)224;
void init() {
}

void checksum() {
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
