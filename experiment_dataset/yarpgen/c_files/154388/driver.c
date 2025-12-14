#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)4554;
unsigned short var_8 = (unsigned short)7195;
unsigned int var_9 = 555341767U;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)38931;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)105;
signed char var_20 = (signed char)-69;
unsigned short var_21 = (unsigned short)28891;
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
