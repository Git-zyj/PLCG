#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28070;
short var_4 = (short)13639;
long long int var_6 = -6357419595613633119LL;
unsigned long long int var_7 = 7472463014932419644ULL;
unsigned int var_18 = 2570043334U;
int zero = 0;
unsigned int var_20 = 123465747U;
unsigned long long int var_21 = 4374914827254394110ULL;
unsigned short var_22 = (unsigned short)13037;
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
