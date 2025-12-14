#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)26864;
unsigned long long int var_6 = 13375328058285748136ULL;
long long int var_7 = 3684897977499294447LL;
unsigned short var_8 = (unsigned short)61628;
_Bool var_11 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = -1961830522;
int var_19 = 1193190967;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
