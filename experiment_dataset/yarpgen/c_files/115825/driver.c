#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)112;
unsigned short var_5 = (unsigned short)12321;
long long int var_7 = -847889338387018509LL;
long long int var_17 = 7368832898437697367LL;
unsigned long long int var_18 = 17716782143041318540ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)215;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)35056;
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
