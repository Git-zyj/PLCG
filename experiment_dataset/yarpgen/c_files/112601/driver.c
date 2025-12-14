#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23598;
short var_3 = (short)-26412;
int var_7 = -403251015;
unsigned long long int var_9 = 10016596839126457306ULL;
short var_11 = (short)-16064;
unsigned int var_12 = 374069199U;
signed char var_13 = (signed char)-8;
unsigned long long int var_14 = 15073317192484699196ULL;
short var_16 = (short)-3801;
short var_17 = (short)-30069;
int zero = 0;
unsigned int var_18 = 3774402344U;
short var_19 = (short)963;
unsigned int var_20 = 3266188467U;
short var_21 = (short)-16733;
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
