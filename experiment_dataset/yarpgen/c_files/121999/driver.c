#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5319165519210832LL;
unsigned short var_5 = (unsigned short)59722;
_Bool var_7 = (_Bool)0;
int var_9 = 253668672;
int var_11 = 1099696395;
int zero = 0;
unsigned long long int var_12 = 3828240012418706905ULL;
long long int var_13 = 1696511543919578300LL;
short var_14 = (short)18323;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
