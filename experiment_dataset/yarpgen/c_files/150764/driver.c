#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1474315657U;
unsigned int var_2 = 4016751029U;
unsigned int var_3 = 2592256113U;
long long int var_4 = 1343297955488586989LL;
long long int var_6 = -6253544852472322138LL;
unsigned short var_9 = (unsigned short)50991;
int var_10 = 1315218946;
unsigned long long int var_13 = 17867640594836858820ULL;
int zero = 0;
unsigned int var_17 = 3363044452U;
unsigned long long int var_18 = 6169084225756447999ULL;
void init() {
}

void checksum() {
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
