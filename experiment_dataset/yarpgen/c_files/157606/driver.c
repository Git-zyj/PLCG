#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3274984598U;
short var_1 = (short)4829;
unsigned int var_2 = 256154660U;
unsigned char var_6 = (unsigned char)116;
short var_15 = (short)3628;
int var_16 = -784195816;
long long int var_17 = -108288341033033616LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -8546684930020834802LL;
int var_20 = 944856702;
void init() {
}

void checksum() {
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
