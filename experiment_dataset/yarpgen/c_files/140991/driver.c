#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-114;
unsigned long long int var_5 = 11216239788518349880ULL;
short var_7 = (short)16538;
long long int var_8 = 8369775976243829445LL;
unsigned long long int var_10 = 4653989856004509850ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)25749;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2400395727U;
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
