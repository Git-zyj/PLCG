#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -234008399;
unsigned short var_5 = (unsigned short)31110;
unsigned char var_6 = (unsigned char)243;
long long int var_10 = 6207373729704118286LL;
signed char var_17 = (signed char)-66;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 17151858323127308102ULL;
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
