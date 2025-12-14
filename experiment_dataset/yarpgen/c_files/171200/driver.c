#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5969676126924470317ULL;
unsigned char var_1 = (unsigned char)158;
long long int var_8 = -3739211210459516079LL;
int zero = 0;
short var_10 = (short)25036;
unsigned char var_11 = (unsigned char)230;
unsigned long long int var_12 = 471062245051621740ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
