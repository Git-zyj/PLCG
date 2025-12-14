#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3675747550100507041ULL;
unsigned int var_3 = 1484523414U;
short var_4 = (short)-26347;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-60;
unsigned short var_9 = (unsigned short)13014;
unsigned long long int var_11 = 4457079880582917107ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 631906932U;
unsigned int var_18 = 2527435994U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
