#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3966;
int var_2 = 214905244;
unsigned int var_5 = 3832193033U;
long long int var_6 = 498871053951361288LL;
signed char var_8 = (signed char)-109;
unsigned char var_9 = (unsigned char)161;
long long int var_11 = 2574685280368708872LL;
unsigned int var_12 = 1796583801U;
int zero = 0;
int var_17 = -1647540881;
unsigned short var_18 = (unsigned short)60726;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
