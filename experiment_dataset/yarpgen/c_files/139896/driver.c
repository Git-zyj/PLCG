#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
unsigned char var_1 = (unsigned char)161;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)55034;
long long int var_9 = -5727680771522795926LL;
unsigned long long int var_10 = 17317272695070933280ULL;
signed char var_11 = (signed char)48;
signed char var_12 = (signed char)-93;
int zero = 0;
unsigned char var_13 = (unsigned char)146;
signed char var_14 = (signed char)-58;
unsigned char var_15 = (unsigned char)152;
unsigned int var_16 = 3789033646U;
long long int var_17 = 6521855895547573232LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
