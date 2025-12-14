#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2445798863U;
unsigned char var_3 = (unsigned char)109;
unsigned int var_6 = 2446946377U;
unsigned long long int var_7 = 2184782362060596147ULL;
unsigned short var_15 = (unsigned short)25592;
int zero = 0;
signed char var_16 = (signed char)125;
unsigned char var_17 = (unsigned char)140;
short var_18 = (short)26402;
int var_19 = 737274879;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
