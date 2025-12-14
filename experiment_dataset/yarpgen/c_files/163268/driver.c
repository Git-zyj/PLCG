#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4333059666266663516LL;
long long int var_4 = 2623000602734204308LL;
_Bool var_5 = (_Bool)0;
int var_13 = 150464134;
unsigned short var_16 = (unsigned short)62964;
int zero = 0;
int var_17 = -153248489;
int var_18 = -548381525;
int var_19 = 365222137;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
