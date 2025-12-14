#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8253;
int var_1 = -788105494;
signed char var_2 = (signed char)-125;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned int var_15 = 2946645466U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2935050506U;
unsigned char var_21 = (unsigned char)2;
int var_22 = -1444659570;
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
