#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2648643972U;
unsigned char var_2 = (unsigned char)36;
unsigned short var_8 = (unsigned short)9238;
signed char var_10 = (signed char)86;
long long int var_11 = 3843115650539914558LL;
int zero = 0;
unsigned int var_16 = 20958099U;
long long int var_17 = 8251297218237691998LL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -2432408202498733392LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
