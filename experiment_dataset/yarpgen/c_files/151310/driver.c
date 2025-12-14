#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33453;
unsigned short var_3 = (unsigned short)58994;
short var_5 = (short)13139;
long long int var_6 = -847762451682015345LL;
long long int var_8 = 2168223870058121393LL;
unsigned long long int var_9 = 16241499700037173366ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-3113;
long long int var_12 = 6434026887089669761LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
