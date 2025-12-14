#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6106872577890353051ULL;
unsigned char var_7 = (unsigned char)120;
unsigned int var_12 = 3529145568U;
short var_16 = (short)-1929;
long long int var_18 = -7390671333593006946LL;
int zero = 0;
int var_20 = 1629673348;
long long int var_21 = -8897905453828472268LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
