#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3736060846U;
unsigned long long int var_3 = 14236378666072044844ULL;
unsigned int var_4 = 474188226U;
unsigned long long int var_5 = 4271903885627397402ULL;
long long int var_6 = -8968856648802314283LL;
short var_8 = (short)-27854;
unsigned int var_9 = 610850878U;
long long int var_10 = 5199864524253242926LL;
unsigned char var_11 = (unsigned char)229;
unsigned int var_12 = 3644082813U;
int zero = 0;
unsigned char var_14 = (unsigned char)178;
unsigned int var_15 = 578102255U;
unsigned int var_16 = 15525412U;
unsigned long long int var_17 = 5625384137837494047ULL;
long long int var_18 = 1177278461216196082LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
