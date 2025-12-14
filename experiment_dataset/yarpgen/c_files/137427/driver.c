#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1600970126;
short var_2 = (short)15812;
int var_5 = -1554275322;
unsigned short var_9 = (unsigned short)33074;
long long int var_15 = 5223016111844212850LL;
int var_19 = 352714660;
int zero = 0;
long long int var_20 = -7825911612747173778LL;
unsigned short var_21 = (unsigned short)19568;
int var_22 = 792276677;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
