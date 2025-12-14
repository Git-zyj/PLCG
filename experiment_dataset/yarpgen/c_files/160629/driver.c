#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)26622;
unsigned short var_6 = (unsigned short)34718;
long long int var_7 = 2096766102128420552LL;
signed char var_9 = (signed char)85;
signed char var_12 = (signed char)-2;
int zero = 0;
short var_18 = (short)17504;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
