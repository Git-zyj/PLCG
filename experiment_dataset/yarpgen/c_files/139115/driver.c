#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 949510418;
unsigned short var_15 = (unsigned short)39224;
int zero = 0;
unsigned char var_19 = (unsigned char)118;
long long int var_20 = -8103466063413660544LL;
unsigned int var_21 = 684490387U;
void init() {
}

void checksum() {
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
