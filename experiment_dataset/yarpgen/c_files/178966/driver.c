#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1190435606U;
long long int var_9 = 7736472798516295313LL;
unsigned long long int var_11 = 16044494939703868279ULL;
unsigned long long int var_15 = 13738057275466814053ULL;
unsigned char var_16 = (unsigned char)124;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 2063704962544304213ULL;
unsigned char var_19 = (unsigned char)57;
void init() {
}

void checksum() {
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
