#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-51;
_Bool var_7 = (_Bool)0;
signed char var_11 = (signed char)121;
int var_12 = -1147359752;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-8;
unsigned long long int var_15 = 6158988003711352588ULL;
short var_17 = (short)-28995;
int zero = 0;
long long int var_19 = 3043334699140911637LL;
unsigned char var_20 = (unsigned char)183;
unsigned long long int var_21 = 17852117923051188923ULL;
unsigned short var_22 = (unsigned short)26340;
unsigned int var_23 = 2366465054U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
