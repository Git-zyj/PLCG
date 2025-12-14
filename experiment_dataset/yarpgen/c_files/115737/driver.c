#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2954449231U;
unsigned int var_3 = 2908313019U;
short var_9 = (short)25391;
unsigned int var_10 = 3067338144U;
signed char var_16 = (signed char)-97;
int zero = 0;
signed char var_19 = (signed char)-37;
signed char var_20 = (signed char)-23;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
