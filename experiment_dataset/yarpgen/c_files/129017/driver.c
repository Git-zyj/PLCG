#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8624747039274806817LL;
unsigned int var_6 = 276757944U;
unsigned int var_8 = 4028764277U;
unsigned short var_9 = (unsigned short)31110;
short var_10 = (short)15855;
signed char var_12 = (signed char)15;
short var_13 = (short)-21076;
long long int var_16 = -6462571548059798122LL;
int zero = 0;
signed char var_17 = (signed char)-34;
unsigned int var_18 = 3192315642U;
unsigned int var_19 = 58990625U;
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
