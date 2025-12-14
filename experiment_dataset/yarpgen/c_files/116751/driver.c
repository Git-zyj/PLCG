#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7619020185032340290LL;
_Bool var_9 = (_Bool)0;
int var_12 = -2067350780;
unsigned int var_14 = 775639369U;
int zero = 0;
unsigned short var_18 = (unsigned short)61763;
int var_19 = 1059764521;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
