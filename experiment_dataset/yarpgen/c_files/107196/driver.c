#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4351;
signed char var_3 = (signed char)117;
unsigned long long int var_4 = 11045902334651907137ULL;
signed char var_7 = (signed char)-31;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = 2030052191778980592LL;
short var_11 = (short)13877;
unsigned short var_12 = (unsigned short)10619;
long long int var_13 = -5345607369432230244LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
