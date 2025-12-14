#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
signed char var_2 = (signed char)-126;
unsigned long long int var_5 = 14077506121684668147ULL;
signed char var_12 = (signed char)90;
int zero = 0;
unsigned char var_13 = (unsigned char)60;
short var_14 = (short)-16913;
_Bool var_15 = (_Bool)0;
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
