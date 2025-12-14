#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7761878145485636417ULL;
int var_2 = -136150789;
_Bool var_5 = (_Bool)0;
int var_7 = -855543447;
unsigned short var_8 = (unsigned short)22217;
unsigned long long int var_10 = 10624160461198220144ULL;
unsigned int var_11 = 3478722350U;
unsigned short var_12 = (unsigned short)26764;
int var_17 = 1195705439;
int var_18 = -431472784;
int zero = 0;
unsigned int var_20 = 3758532749U;
long long int var_21 = 2253574783823315674LL;
unsigned long long int var_22 = 12380497027408299994ULL;
long long int var_23 = 7638719609261933317LL;
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
