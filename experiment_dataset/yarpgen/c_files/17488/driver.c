#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)38;
long long int var_5 = 3449241500503174941LL;
signed char var_6 = (signed char)-59;
int zero = 0;
signed char var_17 = (signed char)38;
unsigned int var_18 = 480933590U;
long long int var_19 = -808588893199739165LL;
unsigned long long int var_20 = 8637010112056427055ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
