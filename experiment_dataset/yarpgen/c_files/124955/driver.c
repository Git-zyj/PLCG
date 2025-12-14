#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)252;
long long int var_2 = -8475592296961196029LL;
unsigned int var_3 = 3170654898U;
int var_4 = -1576562905;
unsigned short var_7 = (unsigned short)57327;
unsigned char var_9 = (unsigned char)127;
unsigned long long int var_11 = 5674274596938416750ULL;
short var_12 = (short)5992;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_17 = 4390366502382047354LL;
short var_18 = (short)18072;
unsigned long long int var_19 = 5672559016539551899ULL;
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
