#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7440391460687403159LL;
long long int var_5 = -8327655356049435267LL;
int zero = 0;
unsigned long long int var_10 = 4866436167171867519ULL;
unsigned short var_11 = (unsigned short)19300;
short var_12 = (short)-26719;
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
