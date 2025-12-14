#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
unsigned int var_2 = 3287483306U;
long long int var_4 = -7357401520191498693LL;
int var_5 = 2008908626;
unsigned short var_6 = (unsigned short)29864;
unsigned short var_8 = (unsigned short)21642;
short var_9 = (short)21758;
int var_10 = 1621882925;
signed char var_12 = (signed char)-70;
long long int var_14 = -9028908172013239194LL;
int zero = 0;
int var_15 = -329473162;
signed char var_16 = (signed char)37;
unsigned short var_17 = (unsigned short)27886;
void init() {
}

void checksum() {
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
