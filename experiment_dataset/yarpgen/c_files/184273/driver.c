#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)7318;
unsigned short var_6 = (unsigned short)26075;
unsigned long long int var_8 = 17151726883966574697ULL;
_Bool var_9 = (_Bool)1;
int var_10 = 904448534;
int var_11 = 697451280;
unsigned int var_12 = 4248875034U;
signed char var_13 = (signed char)-110;
int zero = 0;
int var_14 = -161563629;
unsigned char var_15 = (unsigned char)81;
unsigned short var_16 = (unsigned short)38091;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
