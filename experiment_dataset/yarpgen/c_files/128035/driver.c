#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4923473916347430839LL;
unsigned long long int var_1 = 12185895663127392130ULL;
long long int var_4 = 1456808624220311736LL;
unsigned long long int var_8 = 9913720859025553449ULL;
short var_10 = (short)25395;
int var_11 = -31111260;
int zero = 0;
unsigned char var_14 = (unsigned char)100;
long long int var_15 = 5521335076498857984LL;
unsigned long long int var_16 = 5260084836941393660ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
