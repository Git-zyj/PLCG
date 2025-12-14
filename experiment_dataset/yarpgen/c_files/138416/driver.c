#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2951912521154908288LL;
unsigned char var_2 = (unsigned char)231;
short var_3 = (short)-23504;
unsigned long long int var_8 = 2442653166774527789ULL;
unsigned short var_10 = (unsigned short)31004;
int var_14 = -989034705;
unsigned long long int var_16 = 9520644151605347864ULL;
short var_18 = (short)15882;
int zero = 0;
signed char var_19 = (signed char)46;
long long int var_20 = -2978107304719544849LL;
long long int var_21 = 2777325247077864376LL;
short var_22 = (short)1851;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
