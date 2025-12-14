#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20559;
signed char var_3 = (signed char)-64;
unsigned short var_7 = (unsigned short)54599;
unsigned short var_9 = (unsigned short)7572;
int var_14 = 1347626898;
int zero = 0;
long long int var_17 = -3691204182034123407LL;
_Bool var_18 = (_Bool)0;
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
