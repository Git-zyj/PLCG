#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6113145562445104630ULL;
long long int var_4 = -2171941158135121353LL;
int var_5 = -486880534;
unsigned long long int var_7 = 7549725108419037102ULL;
signed char var_16 = (signed char)54;
unsigned short var_18 = (unsigned short)22658;
int zero = 0;
int var_19 = 1544448554;
long long int var_20 = -1461447806871667210LL;
int var_21 = -265770407;
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
