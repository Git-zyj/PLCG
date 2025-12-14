#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8139977077480525803LL;
short var_3 = (short)9369;
unsigned short var_5 = (unsigned short)41496;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 16970103954224745690ULL;
long long int var_13 = 1263208948774768995LL;
long long int var_14 = -8099964427438211302LL;
int zero = 0;
unsigned short var_17 = (unsigned short)2325;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)24616;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
