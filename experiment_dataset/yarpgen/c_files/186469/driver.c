#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = 362746281;
int var_5 = -711445100;
unsigned int var_6 = 1034532439U;
short var_12 = (short)-29382;
int zero = 0;
unsigned int var_16 = 3627585502U;
unsigned long long int var_17 = 8484523710948045952ULL;
unsigned int var_18 = 3731741904U;
unsigned long long int var_19 = 9582593539481963922ULL;
unsigned long long int var_20 = 17344616864770683060ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
