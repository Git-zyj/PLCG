#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38788;
unsigned long long int var_3 = 14292333684528174322ULL;
unsigned short var_4 = (unsigned short)53523;
unsigned char var_5 = (unsigned char)52;
unsigned int var_7 = 3333529849U;
unsigned short var_8 = (unsigned short)47945;
unsigned char var_10 = (unsigned char)191;
unsigned int var_12 = 2781245382U;
int zero = 0;
unsigned long long int var_13 = 5461177915147083078ULL;
int var_14 = -1734922616;
unsigned short var_15 = (unsigned short)20168;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 266041734345930588ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
