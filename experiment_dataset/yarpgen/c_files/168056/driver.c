#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
unsigned int var_1 = 2743628244U;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)16;
short var_5 = (short)-5197;
unsigned int var_8 = 2162255555U;
int zero = 0;
short var_13 = (short)7423;
signed char var_14 = (signed char)-111;
signed char var_15 = (signed char)-61;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
