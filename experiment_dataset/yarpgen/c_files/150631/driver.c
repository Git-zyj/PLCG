#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 15128339211207508986ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 11585228988592666811ULL;
long long int var_6 = -6357722782272248972LL;
int var_7 = 654644100;
long long int var_9 = -5725434095753702263LL;
unsigned short var_10 = (unsigned short)5025;
int zero = 0;
short var_12 = (short)-9874;
unsigned int var_13 = 193259677U;
unsigned int var_14 = 1400677829U;
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
