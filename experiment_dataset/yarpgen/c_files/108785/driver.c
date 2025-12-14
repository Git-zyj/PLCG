#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48291;
unsigned long long int var_2 = 14810941988339786983ULL;
unsigned int var_12 = 2411546225U;
unsigned long long int var_17 = 17193676073252007595ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)63791;
signed char var_19 = (signed char)103;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
