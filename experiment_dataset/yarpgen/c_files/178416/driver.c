#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10505461286447674658ULL;
short var_3 = (short)-31117;
_Bool var_4 = (_Bool)1;
int var_5 = -1524983422;
long long int var_8 = -8521166569121761262LL;
int zero = 0;
unsigned int var_12 = 2522350248U;
signed char var_13 = (signed char)86;
int var_14 = 1498237841;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
