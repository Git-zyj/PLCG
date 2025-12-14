#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)10;
short var_7 = (short)-21708;
int var_11 = -1525143630;
int zero = 0;
long long int var_12 = 5389526453144434471LL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)60902;
void init() {
}

void checksum() {
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
