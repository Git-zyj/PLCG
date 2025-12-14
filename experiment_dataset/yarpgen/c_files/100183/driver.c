#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1610991815;
unsigned int var_3 = 1275216661U;
unsigned int var_5 = 217783615U;
unsigned int var_7 = 3834890932U;
signed char var_9 = (signed char)118;
int zero = 0;
int var_14 = 1533003206;
signed char var_15 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
