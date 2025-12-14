#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2744654744U;
unsigned long long int var_6 = 5239542096956914179ULL;
_Bool var_9 = (_Bool)0;
signed char var_13 = (signed char)42;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)123;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
