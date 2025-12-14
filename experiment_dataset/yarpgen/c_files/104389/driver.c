#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11131573501202782358ULL;
unsigned long long int var_5 = 15610141020915008850ULL;
long long int var_9 = -916316269380161180LL;
int zero = 0;
signed char var_12 = (signed char)-56;
unsigned int var_13 = 1511739386U;
int var_14 = 517141620;
short var_15 = (short)-24172;
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
