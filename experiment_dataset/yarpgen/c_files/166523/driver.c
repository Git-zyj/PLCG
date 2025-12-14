#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-22;
unsigned int var_1 = 3464166386U;
unsigned int var_2 = 2959300224U;
short var_3 = (short)-26248;
short var_10 = (short)-24637;
int zero = 0;
signed char var_11 = (signed char)31;
unsigned char var_12 = (unsigned char)63;
unsigned int var_13 = 3461887967U;
int var_14 = -1579622218;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
