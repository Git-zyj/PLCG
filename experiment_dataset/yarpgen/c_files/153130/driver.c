#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9124287897589632582LL;
unsigned short var_1 = (unsigned short)25330;
unsigned int var_3 = 4159606594U;
short var_6 = (short)4751;
unsigned short var_8 = (unsigned short)17839;
signed char var_9 = (signed char)76;
long long int var_11 = 1852085915839515821LL;
int var_15 = -1407830950;
int zero = 0;
long long int var_19 = 6116616562593612084LL;
signed char var_20 = (signed char)47;
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
