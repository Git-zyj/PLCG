#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60343;
short var_1 = (short)20172;
short var_2 = (short)25348;
long long int var_6 = 8974179741387923621LL;
int zero = 0;
long long int var_16 = -3152058695307464315LL;
short var_17 = (short)-24173;
long long int var_18 = 1461625076746104020LL;
long long int var_19 = -969556089570975953LL;
void init() {
}

void checksum() {
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
