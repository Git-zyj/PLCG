#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7486;
short var_5 = (short)-28969;
_Bool var_6 = (_Bool)0;
long long int var_9 = -8313652089639752665LL;
unsigned long long int var_16 = 15345137120818458738ULL;
int zero = 0;
unsigned long long int var_20 = 3975238138123994733ULL;
long long int var_21 = -4236029271922868795LL;
void init() {
}

void checksum() {
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
