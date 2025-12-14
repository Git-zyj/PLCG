#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1372119008046963051ULL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 13459809320498979760ULL;
int var_3 = 688248057;
unsigned int var_4 = 724693539U;
int var_5 = 149053536;
unsigned int var_6 = 3676219847U;
long long int var_7 = 64880254968094394LL;
long long int var_9 = 7106269924783596467LL;
int zero = 0;
unsigned long long int var_10 = 13438133472034163729ULL;
unsigned short var_11 = (unsigned short)53630;
unsigned long long int var_12 = 11773961241754550925ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
