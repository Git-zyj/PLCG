#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)114;
unsigned short var_5 = (unsigned short)45393;
unsigned char var_6 = (unsigned char)254;
int var_7 = -439420458;
signed char var_11 = (signed char)37;
int zero = 0;
unsigned short var_15 = (unsigned short)58599;
long long int var_16 = 3279237354178515026LL;
unsigned char var_17 = (unsigned char)58;
unsigned int var_18 = 191276738U;
unsigned char var_19 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
