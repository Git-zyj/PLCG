#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19692;
unsigned short var_3 = (unsigned short)5077;
unsigned int var_12 = 3059043184U;
short var_14 = (short)9092;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 2280988446171372528ULL;
unsigned long long int var_20 = 11663511448240237512ULL;
signed char var_21 = (signed char)-90;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
