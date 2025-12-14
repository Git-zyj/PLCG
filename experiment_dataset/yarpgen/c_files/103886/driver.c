#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-103;
unsigned int var_13 = 1635761530U;
short var_14 = (short)-210;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 326716213U;
int zero = 0;
unsigned short var_19 = (unsigned short)37941;
unsigned long long int var_20 = 6279746345995299895ULL;
signed char var_21 = (signed char)-45;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
