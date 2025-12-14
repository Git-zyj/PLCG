#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6540989434745060278LL;
short var_3 = (short)12394;
short var_5 = (short)7956;
long long int var_6 = -1950717904460156372LL;
unsigned int var_7 = 2810865584U;
unsigned long long int var_8 = 779447797687651276ULL;
int var_9 = 296843600;
int zero = 0;
unsigned long long int var_10 = 12175911081992480950ULL;
short var_11 = (short)6445;
signed char var_12 = (signed char)-6;
unsigned int var_13 = 3721472637U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
