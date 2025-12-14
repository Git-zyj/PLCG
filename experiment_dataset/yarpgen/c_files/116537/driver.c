#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -5455911593165283266LL;
long long int var_11 = -8977430480344326862LL;
unsigned long long int var_13 = 15498238697431469010ULL;
short var_17 = (short)27448;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -5641889441857216904LL;
long long int var_21 = 6523777195296995541LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
