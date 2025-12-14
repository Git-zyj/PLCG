#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52635;
unsigned int var_6 = 1989076112U;
unsigned long long int var_9 = 905866377694356887ULL;
int zero = 0;
signed char var_11 = (signed char)-58;
unsigned short var_12 = (unsigned short)29900;
_Bool var_13 = (_Bool)1;
short var_14 = (short)18682;
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
