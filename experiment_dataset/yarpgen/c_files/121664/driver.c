#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21110;
long long int var_3 = -7252479982908248372LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)1;
unsigned long long int var_16 = 8745537834412017352ULL;
unsigned short var_17 = (unsigned short)65315;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
