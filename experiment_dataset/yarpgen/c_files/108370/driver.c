#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11691476949312780613ULL;
long long int var_1 = 6842935497760567610LL;
unsigned long long int var_2 = 3407178698179390382ULL;
short var_3 = (short)-14770;
short var_4 = (short)-7020;
_Bool var_5 = (_Bool)1;
int var_8 = -665359854;
unsigned short var_9 = (unsigned short)32464;
short var_10 = (short)-4864;
int zero = 0;
unsigned int var_11 = 3482599378U;
unsigned long long int var_12 = 8069184262435040466ULL;
short var_13 = (short)28309;
unsigned short var_14 = (unsigned short)21042;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
