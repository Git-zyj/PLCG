#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5513204627423657315LL;
unsigned short var_5 = (unsigned short)53558;
long long int var_7 = 1671061098820490654LL;
long long int var_14 = -3077727519274882445LL;
long long int var_15 = -4527584007919148682LL;
long long int var_17 = -8216939657040606986LL;
int zero = 0;
short var_18 = (short)31049;
long long int var_19 = -4511549827651601169LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
