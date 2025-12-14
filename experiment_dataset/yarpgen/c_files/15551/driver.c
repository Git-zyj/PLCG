#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2555613570U;
int var_2 = -163649725;
short var_4 = (short)5288;
unsigned long long int var_5 = 10075049485802121838ULL;
long long int var_7 = 5297706977209708986LL;
unsigned char var_8 = (unsigned char)47;
int var_9 = -1280305632;
int zero = 0;
int var_10 = 1462082028;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
