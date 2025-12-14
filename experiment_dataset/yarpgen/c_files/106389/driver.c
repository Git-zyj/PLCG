#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7904;
signed char var_1 = (signed char)115;
unsigned int var_2 = 4070596861U;
short var_3 = (short)-29561;
short var_7 = (short)22817;
unsigned long long int var_9 = 6719689316038427660ULL;
signed char var_11 = (signed char)-30;
int zero = 0;
short var_12 = (short)-4654;
short var_13 = (short)23086;
signed char var_14 = (signed char)-72;
signed char var_15 = (signed char)-46;
unsigned int var_16 = 3170779121U;
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
