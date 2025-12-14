#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2150744817836320117ULL;
signed char var_3 = (signed char)-42;
long long int var_6 = 5224080287333057251LL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3398500499U;
unsigned long long int var_10 = 7915995229666005037ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)74;
signed char var_13 = (signed char)-64;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
