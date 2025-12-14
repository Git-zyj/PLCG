#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 986093610U;
int var_7 = 661624796;
unsigned int var_9 = 1225340042U;
long long int var_11 = -4390191999098134574LL;
short var_14 = (short)18662;
long long int var_16 = -3862233458764586700LL;
unsigned short var_17 = (unsigned short)24992;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
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
