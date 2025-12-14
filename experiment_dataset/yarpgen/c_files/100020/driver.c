#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
int var_2 = -915589351;
signed char var_4 = (signed char)24;
long long int var_7 = -177118861078858688LL;
unsigned long long int var_9 = 13392902448157259020ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)13521;
unsigned char var_12 = (unsigned char)130;
long long int var_13 = 7093423716856909392LL;
signed char var_14 = (signed char)-46;
signed char var_15 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
