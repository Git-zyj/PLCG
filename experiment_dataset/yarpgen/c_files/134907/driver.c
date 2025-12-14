#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11925297957306484285ULL;
int var_7 = 1047300068;
int zero = 0;
short var_11 = (short)-9701;
unsigned long long int var_12 = 11281325580431796826ULL;
short var_13 = (short)28840;
long long int var_14 = -2613600922512204077LL;
unsigned long long int var_15 = 7017006327436536615ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
