#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40313;
unsigned long long int var_2 = 13882889117241590777ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)228;
int zero = 0;
unsigned char var_10 = (unsigned char)188;
int var_11 = -1676890693;
signed char var_12 = (signed char)-7;
long long int var_13 = -236401875798958851LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
