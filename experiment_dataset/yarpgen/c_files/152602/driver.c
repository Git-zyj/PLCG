#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 731196892101012764ULL;
short var_6 = (short)-32313;
signed char var_9 = (signed char)79;
_Bool var_12 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)62;
int var_19 = 254558163;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-11498;
unsigned short var_22 = (unsigned short)17153;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
