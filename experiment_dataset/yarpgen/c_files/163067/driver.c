#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21535;
int var_1 = -1832911533;
_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)204;
unsigned char var_11 = (unsigned char)137;
int zero = 0;
long long int var_12 = 8058769034660933467LL;
signed char var_13 = (signed char)125;
unsigned long long int var_14 = 8602004281893317164ULL;
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
