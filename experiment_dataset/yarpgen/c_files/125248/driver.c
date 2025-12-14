#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)47265;
int var_8 = 1015365958;
long long int var_10 = 6948777545624260556LL;
short var_11 = (short)-8673;
unsigned char var_14 = (unsigned char)184;
int zero = 0;
long long int var_15 = 8277595021748756775LL;
int var_16 = -96610839;
long long int var_17 = -7868758032313205298LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
