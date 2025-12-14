#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
unsigned char var_2 = (unsigned char)125;
signed char var_5 = (signed char)97;
_Bool var_12 = (_Bool)1;
long long int var_13 = -1888569513402323504LL;
unsigned long long int var_14 = 12330959966857823456ULL;
int zero = 0;
unsigned int var_17 = 780143047U;
short var_18 = (short)27905;
long long int var_19 = -8799445195563319054LL;
void init() {
}

void checksum() {
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
