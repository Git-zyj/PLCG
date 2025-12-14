#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4178822693530275814LL;
unsigned int var_8 = 4293054411U;
unsigned char var_11 = (unsigned char)143;
unsigned int var_15 = 561043604U;
int zero = 0;
unsigned int var_20 = 204761610U;
long long int var_21 = 6135745578513237289LL;
unsigned short var_22 = (unsigned short)57713;
void init() {
}

void checksum() {
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
