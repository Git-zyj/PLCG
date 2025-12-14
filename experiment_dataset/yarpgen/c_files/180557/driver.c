#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9108;
unsigned long long int var_7 = 17527590560408658798ULL;
long long int var_9 = -1771822713725551689LL;
int zero = 0;
short var_19 = (short)-2233;
unsigned long long int var_20 = 1615638746855290085ULL;
short var_21 = (short)31310;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
