#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10998346348993946215ULL;
unsigned char var_9 = (unsigned char)221;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)54;
short var_18 = (short)-3430;
int zero = 0;
unsigned int var_19 = 3149811039U;
long long int var_20 = -4831928743067010432LL;
void init() {
}

void checksum() {
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
