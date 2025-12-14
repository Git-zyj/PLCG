#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-58;
_Bool var_3 = (_Bool)1;
long long int var_5 = -3104592725404103028LL;
short var_8 = (short)-6859;
long long int var_11 = -3646719671841449021LL;
int zero = 0;
unsigned long long int var_20 = 13710286926559988918ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
