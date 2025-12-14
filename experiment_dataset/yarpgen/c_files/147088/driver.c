#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3548549016U;
long long int var_4 = -4971794102693819534LL;
_Bool var_8 = (_Bool)1;
short var_13 = (short)-4615;
long long int var_16 = -5339075503082506874LL;
short var_17 = (short)12272;
int zero = 0;
long long int var_18 = -1344222404224688260LL;
long long int var_19 = 1007734592166879914LL;
unsigned int var_20 = 36541009U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
