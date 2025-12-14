#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)122;
signed char var_8 = (signed char)78;
unsigned short var_9 = (unsigned short)57536;
signed char var_10 = (signed char)123;
int zero = 0;
signed char var_11 = (signed char)40;
signed char var_12 = (signed char)68;
unsigned short var_13 = (unsigned short)61249;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
