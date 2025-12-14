#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2087437830;
long long int var_1 = 4962228131141000137LL;
_Bool var_3 = (_Bool)0;
long long int var_6 = 4749571266079605715LL;
int var_9 = 1726411633;
long long int var_10 = 6431134137807985371LL;
int var_11 = 5911688;
unsigned int var_12 = 3424400026U;
int zero = 0;
long long int var_13 = 195432768221086553LL;
unsigned short var_14 = (unsigned short)1330;
unsigned int var_15 = 2773659895U;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2432447687U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
