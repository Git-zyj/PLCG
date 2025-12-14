#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)4251;
unsigned long long int var_8 = 1748069843030557535ULL;
unsigned long long int var_9 = 12969860593433732108ULL;
signed char var_10 = (signed char)-7;
unsigned int var_12 = 3001158351U;
unsigned short var_16 = (unsigned short)35771;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = -852626432;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
