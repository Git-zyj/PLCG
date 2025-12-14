#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1412267668U;
long long int var_3 = -47203167773662856LL;
unsigned int var_4 = 3583439595U;
signed char var_5 = (signed char)1;
signed char var_6 = (signed char)58;
long long int var_9 = -5998375289344733029LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 944098780032815013LL;
long long int var_14 = 6807627455418492767LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
