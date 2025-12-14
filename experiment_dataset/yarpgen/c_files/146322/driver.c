#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 430852993U;
signed char var_3 = (signed char)-77;
unsigned int var_6 = 381748745U;
short var_7 = (short)-27180;
int var_8 = 1652822884;
unsigned long long int var_9 = 17591518485036414256ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = 5191176561499425734LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -7528745389215081541LL;
unsigned short var_15 = (unsigned short)19584;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
