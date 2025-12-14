#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1217972846;
signed char var_7 = (signed char)-53;
long long int var_10 = -8317537455137582381LL;
signed char var_11 = (signed char)-80;
signed char var_14 = (signed char)84;
long long int var_16 = -1733087651201553824LL;
int zero = 0;
unsigned int var_17 = 1142846654U;
long long int var_18 = -8665058472721875998LL;
int var_19 = 722147992;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
