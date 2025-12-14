#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1934432647;
int var_3 = -1372868279;
short var_5 = (short)2118;
signed char var_8 = (signed char)-61;
unsigned long long int var_10 = 8416632775229276178ULL;
int zero = 0;
unsigned int var_11 = 1456874462U;
unsigned long long int var_12 = 14808450802723354108ULL;
long long int var_13 = -3651548810755343721LL;
unsigned int var_14 = 1938533465U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
