#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3118461511U;
unsigned char var_2 = (unsigned char)122;
signed char var_4 = (signed char)53;
unsigned long long int var_5 = 17996876579108749302ULL;
unsigned int var_6 = 3795660792U;
unsigned short var_7 = (unsigned short)56268;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 1277830870U;
unsigned int var_11 = 684658026U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
