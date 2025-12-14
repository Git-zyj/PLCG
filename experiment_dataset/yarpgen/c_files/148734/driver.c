#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 375930891;
long long int var_2 = 4141160029245941972LL;
unsigned long long int var_6 = 11742005597479887862ULL;
unsigned long long int var_8 = 8651848603692907452ULL;
unsigned char var_10 = (unsigned char)155;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)64412;
int var_13 = 531814708;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
