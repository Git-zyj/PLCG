#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)129;
unsigned long long int var_6 = 8896819391382373979ULL;
unsigned char var_9 = (unsigned char)209;
unsigned short var_12 = (unsigned short)55453;
unsigned int var_16 = 3058304494U;
long long int var_17 = 569514799024663288LL;
int zero = 0;
unsigned long long int var_19 = 16565230703610541401ULL;
unsigned int var_20 = 2315449669U;
unsigned char var_21 = (unsigned char)143;
unsigned int var_22 = 648535537U;
signed char var_23 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
