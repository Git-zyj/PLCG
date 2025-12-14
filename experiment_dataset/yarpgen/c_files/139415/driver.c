#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5891028627115156811LL;
unsigned short var_7 = (unsigned short)54178;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-4781;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 4108323280798934194ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
