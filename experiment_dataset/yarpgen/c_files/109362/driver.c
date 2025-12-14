#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1718678572U;
signed char var_7 = (signed char)102;
long long int var_9 = 7995779129360177799LL;
int zero = 0;
long long int var_19 = 584587084684797413LL;
signed char var_20 = (signed char)-34;
unsigned int var_21 = 3761313423U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
