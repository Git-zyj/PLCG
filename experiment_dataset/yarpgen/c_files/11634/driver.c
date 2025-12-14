#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
short var_2 = (short)54;
short var_6 = (short)-26105;
int var_7 = 13086375;
unsigned long long int var_8 = 284334179116391830ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 16766491732771757418ULL;
signed char var_12 = (signed char)42;
int zero = 0;
int var_14 = -560058010;
unsigned int var_15 = 1403992442U;
unsigned int var_16 = 479966487U;
unsigned long long int var_17 = 16906248858487877370ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
