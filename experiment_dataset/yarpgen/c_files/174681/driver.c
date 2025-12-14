#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5797162418315976331LL;
_Bool var_1 = (_Bool)0;
int var_2 = 176974288;
_Bool var_5 = (_Bool)1;
unsigned short var_11 = (unsigned short)18996;
long long int var_13 = -2083485211855582860LL;
short var_19 = (short)4724;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8454692920606548591LL;
long long int var_22 = -788651614252944627LL;
long long int var_23 = -2606617264626602812LL;
unsigned long long int var_24 = 10720866449408573401ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
