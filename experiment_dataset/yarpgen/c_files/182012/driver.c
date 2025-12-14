#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_6 = -1332187487;
_Bool var_7 = (_Bool)1;
int var_8 = -1381019506;
signed char var_9 = (signed char)121;
int zero = 0;
unsigned int var_12 = 1185210897U;
short var_13 = (short)9346;
void init() {
}

void checksum() {
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
