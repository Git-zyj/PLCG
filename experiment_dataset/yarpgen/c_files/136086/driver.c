#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4971;
unsigned int var_3 = 517816464U;
short var_5 = (short)32527;
unsigned int var_7 = 1866770781U;
int var_8 = -75956207;
short var_12 = (short)25313;
unsigned short var_15 = (unsigned short)49527;
unsigned int var_17 = 1857599646U;
int zero = 0;
int var_20 = 223590585;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3031986799U;
void init() {
}

void checksum() {
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
