#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18368;
long long int var_4 = 8761536411970202552LL;
unsigned long long int var_7 = 15358876219279244248ULL;
unsigned long long int var_11 = 12846880341583546301ULL;
short var_15 = (short)-12276;
int zero = 0;
long long int var_16 = 6304645734993340277LL;
int var_17 = -658913351;
void init() {
}

void checksum() {
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
