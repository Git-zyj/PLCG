#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-52;
signed char var_12 = (signed char)67;
signed char var_17 = (signed char)124;
int zero = 0;
unsigned int var_18 = 1940425189U;
long long int var_19 = 643879438957148722LL;
unsigned long long int var_20 = 15626424414896572007ULL;
void init() {
}

void checksum() {
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
