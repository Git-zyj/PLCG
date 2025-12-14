#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)64;
unsigned char var_6 = (unsigned char)89;
unsigned char var_9 = (unsigned char)116;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)91;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-4;
unsigned int var_19 = 1180537675U;
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
