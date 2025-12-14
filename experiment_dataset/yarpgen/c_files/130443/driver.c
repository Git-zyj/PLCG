#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7155113027973787319LL;
unsigned short var_2 = (unsigned short)36385;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)59891;
int zero = 0;
unsigned short var_13 = (unsigned short)32476;
unsigned char var_14 = (unsigned char)52;
unsigned long long int var_15 = 8951670788828817273ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
