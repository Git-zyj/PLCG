#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 626543058214073976LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 16930122401883533051ULL;
int zero = 0;
long long int var_19 = 6577581441890401376LL;
signed char var_20 = (signed char)36;
unsigned short var_21 = (unsigned short)40830;
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
