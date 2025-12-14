#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
short var_7 = (short)-1995;
short var_9 = (short)-29803;
short var_10 = (short)7623;
short var_11 = (short)2359;
int var_14 = 714159175;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 964247388;
short var_20 = (short)31200;
unsigned long long int var_21 = 12544506847852133735ULL;
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
