#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -471116722;
unsigned short var_1 = (unsigned short)57225;
short var_2 = (short)12166;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2073810959U;
unsigned short var_6 = (unsigned short)59680;
short var_11 = (short)6996;
unsigned short var_12 = (unsigned short)17554;
long long int var_13 = 6183298367071994227LL;
int zero = 0;
short var_18 = (short)12854;
long long int var_19 = 2482896718518408903LL;
long long int var_20 = -9066228254878257198LL;
unsigned int var_21 = 506980981U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
