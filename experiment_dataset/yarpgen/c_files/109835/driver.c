#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1530749560U;
long long int var_9 = -6256730214617282954LL;
signed char var_12 = (signed char)-75;
unsigned long long int var_13 = 11003581691341195109ULL;
int zero = 0;
short var_14 = (short)3945;
long long int var_15 = 7931517180692786419LL;
void init() {
}

void checksum() {
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
