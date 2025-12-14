#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2323740413U;
int var_7 = -487782919;
unsigned int var_9 = 2710229162U;
unsigned long long int var_12 = 13282707312752695216ULL;
short var_17 = (short)18945;
short var_18 = (short)29685;
unsigned int var_19 = 622736148U;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)9960;
unsigned char var_22 = (unsigned char)219;
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
