#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)121;
signed char var_2 = (signed char)-57;
unsigned int var_4 = 1220986603U;
unsigned int var_7 = 3692523052U;
long long int var_8 = -8812896905424358246LL;
long long int var_9 = -3231266796816924988LL;
int zero = 0;
unsigned long long int var_12 = 8219811549952538980ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1875229292472314333ULL;
unsigned int var_15 = 18546546U;
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
