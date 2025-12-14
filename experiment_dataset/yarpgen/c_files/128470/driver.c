#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3721322307937193033LL;
long long int var_8 = 4050491590820437700LL;
short var_9 = (short)10463;
unsigned char var_11 = (unsigned char)165;
unsigned long long int var_16 = 15403239860353297653ULL;
long long int var_18 = -8573390552952853391LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 10100983012229129934ULL;
unsigned char var_21 = (unsigned char)23;
long long int var_22 = -1601971831006943621LL;
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
