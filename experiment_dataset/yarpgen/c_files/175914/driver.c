#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-78;
int var_9 = -780642906;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)22788;
signed char var_13 = (signed char)108;
signed char var_15 = (signed char)55;
int zero = 0;
int var_20 = 229455743;
_Bool var_21 = (_Bool)0;
int var_22 = 1277322640;
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
