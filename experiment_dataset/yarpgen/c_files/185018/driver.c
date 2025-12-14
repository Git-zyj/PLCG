#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25728;
short var_1 = (short)-26619;
signed char var_3 = (signed char)8;
_Bool var_4 = (_Bool)1;
int var_7 = 1493117958;
int var_9 = 2104654108;
unsigned short var_10 = (unsigned short)44986;
int zero = 0;
long long int var_13 = -641661229442026869LL;
short var_14 = (short)-3657;
int var_15 = 2081028723;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
