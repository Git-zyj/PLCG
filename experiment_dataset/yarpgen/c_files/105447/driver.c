#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1681946483U;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)47458;
unsigned int var_12 = 2903017412U;
long long int var_13 = 4151989967646502738LL;
long long int var_15 = -6565630705942817036LL;
int zero = 0;
unsigned int var_18 = 523729130U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
