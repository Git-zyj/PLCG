#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13134795664547954835ULL;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
short var_14 = (short)-10213;
signed char var_18 = (signed char)-39;
int zero = 0;
unsigned long long int var_19 = 1354089150327939830ULL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-30;
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
