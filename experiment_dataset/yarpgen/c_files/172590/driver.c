#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-93;
int var_9 = 1303355555;
unsigned char var_11 = (unsigned char)77;
int zero = 0;
unsigned long long int var_12 = 2331867823774714273ULL;
unsigned int var_13 = 4066361583U;
int var_14 = -740582839;
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
