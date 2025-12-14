#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)14;
long long int var_4 = -3949001446378148602LL;
unsigned int var_6 = 3373456631U;
unsigned int var_7 = 4197460325U;
unsigned long long int var_8 = 8859289926265403507ULL;
long long int var_12 = 5155886527713757309LL;
unsigned char var_14 = (unsigned char)39;
int zero = 0;
unsigned short var_15 = (unsigned short)39858;
unsigned long long int var_16 = 16495812627458028515ULL;
short var_17 = (short)32405;
unsigned long long int var_18 = 8312315754649914133ULL;
unsigned long long int var_19 = 12503254978527072597ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
