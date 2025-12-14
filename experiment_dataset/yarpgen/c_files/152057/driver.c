#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8670;
unsigned char var_3 = (unsigned char)178;
long long int var_4 = 1499436014061124011LL;
signed char var_7 = (signed char)-104;
signed char var_9 = (signed char)-111;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
