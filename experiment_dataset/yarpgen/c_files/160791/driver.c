#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)10170;
unsigned int var_9 = 1583098149U;
short var_11 = (short)-13733;
signed char var_12 = (signed char)-16;
_Bool var_13 = (_Bool)0;
int var_15 = -1828536663;
int zero = 0;
signed char var_16 = (signed char)36;
unsigned int var_17 = 272113672U;
short var_18 = (short)-23555;
long long int var_19 = 4895505164641237912LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
