#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8439205268566865888LL;
int var_6 = 681217451;
unsigned short var_9 = (unsigned short)27293;
short var_11 = (short)-3021;
int var_12 = 696535529;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4242665911U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 17930708026181824016ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
