#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -4697852299567408904LL;
unsigned int var_6 = 2018882474U;
unsigned long long int var_8 = 13614108524546080144ULL;
signed char var_11 = (signed char)82;
int zero = 0;
unsigned long long int var_12 = 2588514170935316349ULL;
unsigned long long int var_13 = 3166331852080204046ULL;
unsigned int var_14 = 2341314956U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
