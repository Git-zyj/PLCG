#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8766282685688967172LL;
int var_5 = 1780955636;
short var_6 = (short)30851;
int zero = 0;
int var_12 = -1439130780;
signed char var_13 = (signed char)126;
unsigned char var_14 = (unsigned char)180;
long long int var_15 = 6398862408238021229LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
