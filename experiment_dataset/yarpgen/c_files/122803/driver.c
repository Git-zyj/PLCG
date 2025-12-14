#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)63;
int var_2 = -1893041957;
long long int var_6 = 2420894019944532442LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-6922;
unsigned int var_11 = 2624269897U;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)110;
int var_19 = -1461681337;
unsigned char var_20 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
