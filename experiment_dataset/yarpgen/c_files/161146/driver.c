#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17153635438607467068ULL;
long long int var_1 = 5968571479332497721LL;
int var_2 = -1551605472;
unsigned short var_3 = (unsigned short)47227;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 269838137U;
int var_8 = 351884394;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)54181;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)39040;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
