#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)20771;
long long int var_18 = 2123830904889723847LL;
int zero = 0;
unsigned char var_19 = (unsigned char)29;
unsigned int var_20 = 1149103798U;
unsigned int var_21 = 2367019184U;
unsigned long long int var_22 = 4330003036176387209ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
