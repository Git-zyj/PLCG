#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
signed char var_12 = (signed char)-6;
unsigned int var_14 = 1515551873U;
unsigned short var_15 = (unsigned short)14049;
int zero = 0;
int var_18 = -405701651;
unsigned long long int var_19 = 6378225212332645136ULL;
unsigned short var_20 = (unsigned short)5770;
int var_21 = -1348153334;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
