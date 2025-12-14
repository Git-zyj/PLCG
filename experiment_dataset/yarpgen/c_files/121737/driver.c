#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3823;
short var_2 = (short)-9187;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 4174229238U;
int zero = 0;
unsigned long long int var_13 = 2224728279389477466ULL;
unsigned short var_14 = (unsigned short)44983;
int var_15 = -312720119;
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
