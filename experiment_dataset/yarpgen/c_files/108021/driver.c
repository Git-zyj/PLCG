#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5222341965522560054LL;
long long int var_8 = -2364506155962918973LL;
int var_10 = 722776431;
_Bool var_11 = (_Bool)0;
long long int var_12 = 3822486852668177637LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 17618999064765455724ULL;
unsigned char var_17 = (unsigned char)252;
int var_18 = 243081484;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
