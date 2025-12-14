#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2977879613009772741ULL;
unsigned char var_3 = (unsigned char)233;
signed char var_4 = (signed char)-43;
unsigned char var_8 = (unsigned char)41;
unsigned char var_9 = (unsigned char)46;
short var_10 = (short)9146;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)97;
unsigned int var_14 = 4131829470U;
unsigned int var_15 = 2453831081U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
