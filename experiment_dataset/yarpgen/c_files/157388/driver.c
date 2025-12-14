#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -898882459;
unsigned int var_2 = 3316834969U;
_Bool var_3 = (_Bool)1;
long long int var_4 = 5974583595780611056LL;
int var_9 = 1149657986;
int var_14 = -835738172;
short var_15 = (short)14587;
int zero = 0;
signed char var_16 = (signed char)50;
long long int var_17 = 7959762481718427274LL;
long long int var_18 = 8833918141034250231LL;
unsigned long long int var_19 = 1460293965391062711ULL;
void init() {
}

void checksum() {
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
