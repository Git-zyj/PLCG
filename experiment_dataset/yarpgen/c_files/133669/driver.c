#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-32755;
unsigned char var_13 = (unsigned char)0;
int zero = 0;
unsigned long long int var_14 = 2448606608656399050ULL;
signed char var_15 = (signed char)-65;
long long int var_16 = 2262698885556617194LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
