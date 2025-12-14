#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_5 = (unsigned short)31147;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1677080670U;
int zero = 0;
long long int var_13 = 1842079469603509073LL;
long long int var_14 = 239812229981181074LL;
void init() {
}

void checksum() {
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
