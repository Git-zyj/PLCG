#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-97;
signed char var_2 = (signed char)36;
unsigned char var_3 = (unsigned char)85;
int var_4 = 282051909;
int zero = 0;
unsigned long long int var_19 = 12091417027453541719ULL;
int var_20 = -639372555;
unsigned int var_21 = 2310201772U;
unsigned long long int var_22 = 11970893326911686082ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
