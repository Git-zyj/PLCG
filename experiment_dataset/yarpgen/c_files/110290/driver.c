#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14990880178916735895ULL;
long long int var_9 = 3171666155746895040LL;
int var_11 = 104094705;
int var_12 = 1500758269;
unsigned int var_13 = 3778189190U;
short var_14 = (short)4816;
unsigned long long int var_16 = 16275904839375621776ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)45617;
long long int var_20 = 8932276263287340217LL;
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
