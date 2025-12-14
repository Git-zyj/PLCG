#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7712448829308993718LL;
unsigned int var_3 = 1797882151U;
int var_4 = -1277612630;
unsigned int var_6 = 2539324217U;
signed char var_9 = (signed char)96;
long long int var_10 = 5385376211731994389LL;
unsigned long long int var_11 = 4366411334834619091ULL;
unsigned char var_13 = (unsigned char)217;
int zero = 0;
unsigned char var_15 = (unsigned char)224;
signed char var_16 = (signed char)126;
unsigned char var_17 = (unsigned char)36;
int var_18 = -313822619;
unsigned long long int var_19 = 5674055930874260555ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
