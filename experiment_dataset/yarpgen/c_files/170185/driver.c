#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17771422758635362645ULL;
unsigned int var_3 = 852151531U;
signed char var_5 = (signed char)-86;
unsigned int var_10 = 1216032933U;
unsigned int var_11 = 4084432473U;
unsigned int var_15 = 4176691510U;
unsigned long long int var_16 = 305181084331946050ULL;
int var_18 = 1316589017;
int zero = 0;
signed char var_19 = (signed char)34;
unsigned int var_20 = 3803716489U;
unsigned int var_21 = 3755513465U;
signed char var_22 = (signed char)-64;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
