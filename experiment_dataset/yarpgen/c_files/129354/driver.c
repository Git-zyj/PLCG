#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3678854458313231911ULL;
unsigned long long int var_6 = 3239231300699511629ULL;
unsigned int var_12 = 1393436064U;
unsigned int var_15 = 3827308836U;
int zero = 0;
short var_17 = (short)-19107;
signed char var_18 = (signed char)-79;
long long int var_19 = -3086639072346857848LL;
int var_20 = 564589274;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
