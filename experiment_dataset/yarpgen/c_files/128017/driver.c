#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7231243830861061622LL;
signed char var_2 = (signed char)114;
unsigned long long int var_5 = 7307890259042599588ULL;
unsigned short var_7 = (unsigned short)15268;
int zero = 0;
long long int var_10 = 3007145607131710385LL;
unsigned int var_11 = 4212422857U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
