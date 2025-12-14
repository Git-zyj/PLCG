#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6706027289074421581LL;
signed char var_6 = (signed char)-125;
long long int var_8 = -4803648461038095538LL;
int zero = 0;
unsigned char var_18 = (unsigned char)92;
int var_19 = -651472690;
int var_20 = 264250591;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
