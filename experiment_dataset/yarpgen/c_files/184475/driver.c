#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_6 = 13807910378954520082ULL;
unsigned int var_9 = 2909418377U;
int zero = 0;
int var_12 = -1065260543;
unsigned long long int var_13 = 11804564964075670203ULL;
signed char var_14 = (signed char)-80;
void init() {
}

void checksum() {
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
