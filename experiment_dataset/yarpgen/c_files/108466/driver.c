#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_4 = 2342609469423767594LL;
short var_7 = (short)19402;
unsigned long long int var_9 = 16248672541560685385ULL;
signed char var_11 = (signed char)57;
unsigned long long int var_15 = 14989592565712326693ULL;
unsigned char var_16 = (unsigned char)214;
int zero = 0;
unsigned long long int var_20 = 18018092960972232168ULL;
signed char var_21 = (signed char)105;
unsigned char var_22 = (unsigned char)177;
short var_23 = (short)-21954;
void init() {
}

void checksum() {
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
