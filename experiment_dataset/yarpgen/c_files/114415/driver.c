#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3837491406U;
unsigned long long int var_2 = 9701884309399468904ULL;
long long int var_6 = 2794088936505980668LL;
_Bool var_9 = (_Bool)0;
unsigned int var_13 = 441641881U;
unsigned int var_14 = 2114357149U;
unsigned char var_15 = (unsigned char)138;
unsigned int var_16 = 2989764090U;
int zero = 0;
unsigned short var_17 = (unsigned short)15054;
unsigned int var_18 = 2763969200U;
signed char var_19 = (signed char)107;
unsigned short var_20 = (unsigned short)3612;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
