#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
unsigned long long int var_1 = 13062803406404941359ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)43402;
long long int var_8 = -2931785435613849986LL;
unsigned long long int var_9 = 12679595757175838745ULL;
short var_10 = (short)-31054;
int zero = 0;
long long int var_12 = -3108822119818989167LL;
unsigned long long int var_13 = 4905916971014551828ULL;
long long int var_14 = -761590471816395572LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
