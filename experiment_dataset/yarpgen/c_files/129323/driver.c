#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9959;
long long int var_2 = 6569638721010881912LL;
int var_5 = 219336417;
unsigned int var_6 = 3286666887U;
signed char var_8 = (signed char)-57;
unsigned long long int var_11 = 8527841719318027897ULL;
int zero = 0;
signed char var_12 = (signed char)15;
long long int var_13 = -7854337325945432486LL;
signed char var_14 = (signed char)87;
signed char var_15 = (signed char)47;
long long int var_16 = 4256887568158114504LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
