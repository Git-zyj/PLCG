#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
signed char var_7 = (signed char)57;
short var_8 = (short)-850;
signed char var_9 = (signed char)11;
int var_10 = -246806980;
unsigned int var_13 = 645155139U;
unsigned int var_16 = 3358378618U;
int zero = 0;
unsigned char var_17 = (unsigned char)180;
int var_18 = 1238454163;
_Bool var_19 = (_Bool)1;
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
