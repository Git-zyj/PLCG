#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3881223643U;
_Bool var_2 = (_Bool)1;
int var_3 = 1128836008;
unsigned char var_4 = (unsigned char)125;
unsigned short var_8 = (unsigned short)36540;
long long int var_9 = -3676418974615401144LL;
unsigned long long int var_10 = 3605107896251085823ULL;
long long int var_14 = 2813978386889067823LL;
long long int var_16 = -3425462447903070967LL;
int zero = 0;
long long int var_17 = 8973476427407922670LL;
unsigned short var_18 = (unsigned short)63271;
void init() {
}

void checksum() {
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
