#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)241;
long long int var_6 = 5466807934152647659LL;
unsigned int var_7 = 3067386865U;
_Bool var_9 = (_Bool)1;
short var_10 = (short)25465;
unsigned long long int var_12 = 8379511519983768688ULL;
int zero = 0;
unsigned long long int var_13 = 2172484804796848717ULL;
unsigned short var_14 = (unsigned short)36352;
unsigned char var_15 = (unsigned char)235;
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
