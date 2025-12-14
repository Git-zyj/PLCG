#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31071;
long long int var_1 = 5962260184637303479LL;
short var_2 = (short)-9595;
long long int var_3 = -4324832421679951939LL;
int var_5 = -856671266;
int var_8 = 939643476;
signed char var_9 = (signed char)66;
short var_10 = (short)25724;
int zero = 0;
int var_13 = 1098877852;
signed char var_14 = (signed char)36;
short var_15 = (short)-21431;
signed char var_16 = (signed char)54;
void init() {
}

void checksum() {
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
