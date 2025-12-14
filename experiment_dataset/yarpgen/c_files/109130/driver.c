#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-25425;
unsigned long long int var_7 = 16241789210921128704ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-102;
short var_13 = (short)25490;
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
