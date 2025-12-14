#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1024700867321045712LL;
long long int var_3 = -2983070820334800653LL;
unsigned long long int var_4 = 3249966709190523043ULL;
short var_6 = (short)26674;
int zero = 0;
long long int var_12 = -3544978799123800351LL;
long long int var_13 = 965197123812379322LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
