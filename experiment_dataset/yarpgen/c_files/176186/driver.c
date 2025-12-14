#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-33;
_Bool var_5 = (_Bool)1;
short var_10 = (short)22655;
unsigned long long int var_13 = 17552554214026996690ULL;
signed char var_15 = (signed char)-46;
int zero = 0;
unsigned int var_19 = 3675146220U;
unsigned short var_20 = (unsigned short)31621;
long long int var_21 = 8355899860828945429LL;
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
