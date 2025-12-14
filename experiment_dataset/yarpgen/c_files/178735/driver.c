#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1249264583U;
unsigned short var_3 = (unsigned short)8266;
unsigned long long int var_7 = 14812030106770129329ULL;
unsigned long long int var_8 = 8568963449675069934ULL;
long long int var_16 = 5830409841764609515LL;
unsigned char var_17 = (unsigned char)216;
int zero = 0;
unsigned short var_20 = (unsigned short)40315;
long long int var_21 = 2414976374125663166LL;
void init() {
}

void checksum() {
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
