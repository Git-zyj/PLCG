#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10700748417384771014ULL;
unsigned short var_6 = (unsigned short)55785;
long long int var_8 = 3272238523940641109LL;
long long int var_10 = -805913758127652245LL;
int zero = 0;
unsigned long long int var_11 = 18126996653482049242ULL;
unsigned long long int var_12 = 4296764674671370387ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
