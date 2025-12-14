#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3177676744872347204LL;
unsigned long long int var_5 = 5498741877778761240ULL;
signed char var_6 = (signed char)47;
int var_8 = 377399873;
unsigned short var_9 = (unsigned short)60604;
unsigned short var_12 = (unsigned short)30265;
unsigned char var_13 = (unsigned char)206;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_18 = (short)-10998;
long long int var_19 = 4742963727800485LL;
short var_20 = (short)-31584;
long long int var_21 = -4759342427670564616LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
