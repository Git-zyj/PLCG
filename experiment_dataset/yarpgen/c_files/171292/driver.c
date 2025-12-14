#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35680;
unsigned short var_1 = (unsigned short)7519;
long long int var_5 = -1505780229682594331LL;
long long int var_6 = 665127862865428131LL;
unsigned short var_11 = (unsigned short)34582;
long long int var_13 = -231095167690654LL;
unsigned short var_14 = (unsigned short)45683;
long long int var_15 = 3054204871668169589LL;
long long int var_18 = -7992676168899363512LL;
int zero = 0;
long long int var_20 = 8481448373783478515LL;
long long int var_21 = 5880536223908404512LL;
unsigned short var_22 = (unsigned short)10138;
unsigned short var_23 = (unsigned short)46688;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
