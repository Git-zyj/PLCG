#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5422760470678950222LL;
long long int var_1 = 8194288941394226942LL;
unsigned short var_7 = (unsigned short)64839;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)28854;
signed char var_14 = (signed char)-114;
void init() {
}

void checksum() {
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
