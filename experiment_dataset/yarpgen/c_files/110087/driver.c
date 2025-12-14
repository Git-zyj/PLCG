#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8647826719805266286LL;
unsigned char var_3 = (unsigned char)57;
short var_5 = (short)26720;
short var_6 = (short)6789;
unsigned long long int var_8 = 14701914392177461323ULL;
int zero = 0;
long long int var_19 = 550503021565629881LL;
unsigned int var_20 = 2595743592U;
unsigned char var_21 = (unsigned char)254;
void init() {
}

void checksum() {
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
