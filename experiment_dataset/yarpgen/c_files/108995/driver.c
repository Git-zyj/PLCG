#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)117;
unsigned long long int var_3 = 6750205420672848982ULL;
long long int var_8 = 6567574527969156071LL;
long long int var_9 = -7883308789465459138LL;
signed char var_10 = (signed char)110;
unsigned int var_11 = 2154604813U;
signed char var_15 = (signed char)-61;
int zero = 0;
unsigned int var_16 = 346220038U;
long long int var_17 = -3209002993604394104LL;
unsigned long long int var_18 = 4418743080781424989ULL;
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
