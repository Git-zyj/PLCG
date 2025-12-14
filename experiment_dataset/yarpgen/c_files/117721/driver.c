#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
int var_2 = -1900465156;
unsigned int var_6 = 2402963751U;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)114;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)66;
int zero = 0;
unsigned short var_15 = (unsigned short)44774;
unsigned int var_16 = 4151497035U;
void init() {
}

void checksum() {
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
