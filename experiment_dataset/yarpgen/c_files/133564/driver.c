#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2284259914U;
unsigned int var_4 = 3442949049U;
long long int var_7 = -8138367713160690574LL;
signed char var_8 = (signed char)-57;
signed char var_11 = (signed char)38;
unsigned char var_13 = (unsigned char)42;
long long int var_14 = 189458363468900557LL;
unsigned long long int var_15 = 10488468542085481167ULL;
int zero = 0;
signed char var_18 = (signed char)112;
unsigned int var_19 = 1915647307U;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
