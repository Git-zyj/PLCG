#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2720754894U;
short var_3 = (short)-20496;
signed char var_4 = (signed char)-60;
unsigned int var_7 = 1261432287U;
unsigned int var_9 = 3742405762U;
unsigned int var_15 = 689558562U;
int zero = 0;
unsigned long long int var_16 = 394073510176842456ULL;
unsigned char var_17 = (unsigned char)118;
unsigned long long int var_18 = 3837468081165492488ULL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
