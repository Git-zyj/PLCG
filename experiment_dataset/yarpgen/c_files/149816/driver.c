#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)21749;
_Bool var_9 = (_Bool)1;
signed char var_13 = (signed char)121;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 1429019178U;
int var_20 = 984591272;
signed char var_21 = (signed char)47;
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
