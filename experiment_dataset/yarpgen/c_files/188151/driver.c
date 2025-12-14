#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)88;
long long int var_15 = 6260589812300383965LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 913144081402263352ULL;
unsigned long long int var_21 = 9298144726400459815ULL;
long long int var_22 = -5295259067112299936LL;
unsigned char var_23 = (unsigned char)26;
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
