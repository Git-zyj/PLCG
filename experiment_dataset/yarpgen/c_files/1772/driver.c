#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20674;
unsigned long long int var_2 = 9699187001594367764ULL;
long long int var_7 = 5345425843392909818LL;
unsigned short var_9 = (unsigned short)8054;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 7084842475133412976ULL;
unsigned short var_16 = (unsigned short)60315;
long long int var_17 = 8297624243995886372LL;
short var_18 = (short)9621;
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
