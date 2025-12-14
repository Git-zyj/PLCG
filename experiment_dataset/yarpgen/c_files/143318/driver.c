#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2406321223917955751LL;
long long int var_1 = 4634204507818000821LL;
signed char var_2 = (signed char)108;
int var_5 = 280553316;
_Bool var_6 = (_Bool)0;
int var_9 = -98737409;
int zero = 0;
unsigned long long int var_10 = 16664213433784435235ULL;
int var_11 = -557279012;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
