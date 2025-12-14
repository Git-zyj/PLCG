#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 7862180780047408172ULL;
long long int var_5 = -1046988235352765920LL;
short var_8 = (short)12332;
int zero = 0;
long long int var_11 = 4964061334595090045LL;
unsigned short var_12 = (unsigned short)25857;
signed char var_13 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
