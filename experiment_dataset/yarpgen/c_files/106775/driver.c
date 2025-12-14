#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
signed char var_4 = (signed char)-88;
short var_5 = (short)-271;
long long int var_6 = 5127313691905639758LL;
long long int var_11 = 8757487440032763141LL;
unsigned long long int var_12 = 10069862691402324215ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)141;
unsigned char var_14 = (unsigned char)177;
short var_15 = (short)-3583;
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
