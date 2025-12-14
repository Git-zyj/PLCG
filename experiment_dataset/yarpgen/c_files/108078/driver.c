#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11572396942014380564ULL;
signed char var_11 = (signed char)18;
signed char var_12 = (signed char)-70;
short var_15 = (short)20183;
signed char var_18 = (signed char)-90;
int zero = 0;
short var_20 = (short)14976;
unsigned long long int var_21 = 14568317315004979013ULL;
unsigned int var_22 = 2934680881U;
void init() {
}

void checksum() {
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
