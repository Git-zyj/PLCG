#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13325425477870066096ULL;
unsigned char var_4 = (unsigned char)152;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-14672;
unsigned char var_11 = (unsigned char)159;
signed char var_12 = (signed char)25;
int zero = 0;
unsigned long long int var_13 = 5191195240713833741ULL;
signed char var_14 = (signed char)-114;
unsigned long long int var_15 = 3856391260755881280ULL;
unsigned char var_16 = (unsigned char)44;
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
