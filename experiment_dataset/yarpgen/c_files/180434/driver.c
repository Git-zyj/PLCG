#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3506741819U;
unsigned char var_3 = (unsigned char)166;
long long int var_5 = 8743332682143430080LL;
unsigned long long int var_6 = 129711925451216384ULL;
long long int var_7 = -5113934079917713001LL;
int var_8 = -512888447;
int var_9 = 2106672293;
int zero = 0;
long long int var_12 = -1033277012430939364LL;
short var_13 = (short)31098;
int var_14 = -177815292;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
