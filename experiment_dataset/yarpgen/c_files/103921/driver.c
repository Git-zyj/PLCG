#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8914962567691943507LL;
int var_6 = 1737182287;
long long int var_7 = -5501193203067450634LL;
signed char var_8 = (signed char)-26;
unsigned char var_9 = (unsigned char)34;
int var_11 = -498549966;
long long int var_12 = -9148714258539804637LL;
int zero = 0;
unsigned long long int var_16 = 10660294146507799386ULL;
short var_17 = (short)6070;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
