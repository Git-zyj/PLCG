#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 373738464;
unsigned int var_1 = 3615555087U;
int var_2 = -901404123;
unsigned char var_5 = (unsigned char)204;
long long int var_7 = 1697378386365992751LL;
unsigned char var_9 = (unsigned char)13;
int var_10 = 643955800;
long long int var_11 = 2702362635283282305LL;
unsigned char var_14 = (unsigned char)37;
unsigned char var_16 = (unsigned char)80;
unsigned long long int var_19 = 3449339078029671322ULL;
int zero = 0;
int var_20 = -625209084;
signed char var_21 = (signed char)-87;
unsigned char var_22 = (unsigned char)223;
unsigned char var_23 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
