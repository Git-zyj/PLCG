#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6361735561880485719LL;
unsigned char var_9 = (unsigned char)104;
unsigned long long int var_13 = 2129790439898186666ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 5721093520428068870LL;
void init() {
}

void checksum() {
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
