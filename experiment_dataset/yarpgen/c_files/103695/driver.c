#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19077;
signed char var_2 = (signed char)7;
signed char var_4 = (signed char)121;
signed char var_5 = (signed char)-44;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)61;
int var_13 = -598001375;
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
