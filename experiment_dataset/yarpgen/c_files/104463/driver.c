#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57997;
long long int var_6 = -3622449758426561751LL;
long long int var_8 = 880351848125563172LL;
int zero = 0;
unsigned long long int var_12 = 4278063561649639492ULL;
long long int var_13 = -1823392236915636807LL;
void init() {
}

void checksum() {
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
