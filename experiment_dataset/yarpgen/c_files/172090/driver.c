#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4015503951049031562LL;
unsigned short var_5 = (unsigned short)50109;
unsigned long long int var_9 = 10380341154952929831ULL;
unsigned long long int var_11 = 12156373693209208109ULL;
unsigned char var_12 = (unsigned char)53;
unsigned int var_15 = 2534830539U;
int zero = 0;
signed char var_17 = (signed char)-21;
unsigned int var_18 = 568607110U;
unsigned short var_19 = (unsigned short)21356;
long long int var_20 = 3347260808218687624LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
