#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)53230;
short var_12 = (short)4174;
unsigned long long int var_13 = 10414237938210813924ULL;
unsigned long long int var_16 = 13104149659316328378ULL;
int zero = 0;
short var_17 = (short)-13450;
unsigned int var_18 = 512173617U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
