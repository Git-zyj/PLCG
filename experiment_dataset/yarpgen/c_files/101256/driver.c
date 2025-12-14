#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1270899416;
signed char var_2 = (signed char)-54;
int var_11 = -1699515878;
unsigned char var_17 = (unsigned char)157;
int zero = 0;
long long int var_20 = -3466620510054662609LL;
long long int var_21 = -1870842102754080322LL;
unsigned char var_22 = (unsigned char)130;
long long int var_23 = 5863282652490772609LL;
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
