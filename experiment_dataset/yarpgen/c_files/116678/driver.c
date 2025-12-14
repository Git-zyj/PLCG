#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)45;
_Bool var_3 = (_Bool)1;
long long int var_4 = 1333107137312376335LL;
signed char var_7 = (signed char)40;
unsigned short var_9 = (unsigned short)47046;
unsigned long long int var_10 = 12924789054310851273ULL;
int zero = 0;
long long int var_13 = 6943823375524854257LL;
unsigned short var_14 = (unsigned short)29267;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
