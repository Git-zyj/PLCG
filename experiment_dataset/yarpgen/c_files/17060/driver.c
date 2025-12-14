#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 407008596939446845ULL;
unsigned int var_2 = 1672733017U;
short var_7 = (short)25338;
unsigned long long int var_10 = 16391387338114589030ULL;
short var_14 = (short)-9292;
unsigned int var_15 = 704841154U;
int zero = 0;
unsigned int var_19 = 378161681U;
long long int var_20 = 4150643027657199817LL;
void init() {
}

void checksum() {
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
