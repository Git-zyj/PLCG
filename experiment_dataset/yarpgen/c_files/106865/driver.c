#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31347;
_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)-56;
short var_6 = (short)8775;
long long int var_9 = -3006457436561879751LL;
int zero = 0;
unsigned short var_11 = (unsigned short)3625;
signed char var_12 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
