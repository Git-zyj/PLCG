#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1081772983897333724LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-101;
_Bool var_13 = (_Bool)0;
long long int var_14 = 5309515494836341441LL;
signed char var_15 = (signed char)-71;
long long int var_16 = -6233743327015348999LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
