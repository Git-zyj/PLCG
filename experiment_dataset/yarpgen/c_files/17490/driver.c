#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-70;
short var_7 = (short)11869;
unsigned long long int var_8 = 8785049171177352025ULL;
unsigned int var_10 = 1499185427U;
unsigned long long int var_11 = 2954430453929247747ULL;
int var_13 = -1643156669;
short var_14 = (short)26429;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -1311240550;
short var_18 = (short)-4065;
short var_19 = (short)-25080;
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
