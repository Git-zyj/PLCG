#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13858233462587411702ULL;
unsigned int var_1 = 3830453975U;
signed char var_3 = (signed char)1;
short var_5 = (short)28196;
short var_11 = (short)-8161;
short var_12 = (short)32615;
int zero = 0;
unsigned long long int var_13 = 3506431607736152325ULL;
signed char var_14 = (signed char)76;
void init() {
}

void checksum() {
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
