#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-9;
signed char var_3 = (signed char)103;
int var_6 = -1547485089;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 6765606860700428584ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 7839380138115003208ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 9155144167730972321ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
