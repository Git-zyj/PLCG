#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18634;
unsigned short var_2 = (unsigned short)8792;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1058640010U;
short var_5 = (short)-22180;
signed char var_9 = (signed char)-14;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -200449473;
unsigned int var_21 = 618320019U;
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
