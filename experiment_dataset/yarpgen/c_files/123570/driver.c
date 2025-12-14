#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3565;
_Bool var_3 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)220;
int zero = 0;
short var_11 = (short)26446;
long long int var_12 = 4053819842328813964LL;
unsigned long long int var_13 = 5117858800586870494ULL;
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
