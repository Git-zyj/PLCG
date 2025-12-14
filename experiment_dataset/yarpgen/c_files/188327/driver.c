#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 15009217891419507493ULL;
int var_7 = 308932058;
unsigned char var_8 = (unsigned char)149;
unsigned short var_9 = (unsigned short)64192;
int zero = 0;
unsigned int var_11 = 4187022438U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 2295288331020957477ULL;
signed char var_14 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
