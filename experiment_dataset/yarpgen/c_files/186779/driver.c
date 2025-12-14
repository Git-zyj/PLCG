#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-67;
int var_5 = 1163186059;
short var_6 = (short)-18689;
unsigned long long int var_8 = 14770582351120019758ULL;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)-19;
int zero = 0;
unsigned long long int var_15 = 17944921545076041159ULL;
long long int var_16 = 2213837343398227954LL;
void init() {
}

void checksum() {
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
