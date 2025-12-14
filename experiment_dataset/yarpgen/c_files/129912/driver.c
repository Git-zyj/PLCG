#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7255809076981666884LL;
unsigned long long int var_4 = 3063120596081947796ULL;
unsigned long long int var_5 = 17479650372214986379ULL;
long long int var_7 = -3978800249269952280LL;
long long int var_8 = -4951294405377961690LL;
unsigned short var_9 = (unsigned short)38224;
int zero = 0;
int var_10 = 914842909;
unsigned short var_11 = (unsigned short)25254;
signed char var_12 = (signed char)18;
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
