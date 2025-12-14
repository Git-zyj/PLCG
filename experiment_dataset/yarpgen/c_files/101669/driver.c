#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24218;
int var_1 = -1895900143;
short var_2 = (short)-27526;
_Bool var_7 = (_Bool)1;
long long int var_9 = -7557282754112881115LL;
unsigned short var_12 = (unsigned short)37991;
int zero = 0;
signed char var_13 = (signed char)51;
unsigned long long int var_14 = 5432356632632963506ULL;
long long int var_15 = -7734439129631010750LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
