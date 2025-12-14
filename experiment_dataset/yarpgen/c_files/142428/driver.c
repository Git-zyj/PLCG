#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20091;
unsigned short var_2 = (unsigned short)34557;
unsigned short var_4 = (unsigned short)14763;
unsigned long long int var_5 = 15889170211079562686ULL;
long long int var_9 = 7738247128212279705LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)6;
unsigned short var_15 = (unsigned short)3955;
signed char var_16 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
