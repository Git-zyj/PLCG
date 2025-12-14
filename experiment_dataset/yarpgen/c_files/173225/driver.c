#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5493935324097691641LL;
unsigned long long int var_5 = 9947545362682314238ULL;
signed char var_6 = (signed char)27;
unsigned int var_7 = 187745441U;
long long int var_9 = -5884404892100366814LL;
short var_12 = (short)4629;
int zero = 0;
signed char var_16 = (signed char)-52;
signed char var_17 = (signed char)78;
int var_18 = -275091779;
unsigned char var_19 = (unsigned char)175;
long long int var_20 = -9118770408804375646LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
