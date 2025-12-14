#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
unsigned short var_3 = (unsigned short)39895;
int var_4 = 65339851;
long long int var_6 = 5125047951043996600LL;
signed char var_8 = (signed char)110;
unsigned short var_12 = (unsigned short)44583;
unsigned char var_13 = (unsigned char)83;
unsigned long long int var_17 = 7903616082309566020ULL;
int zero = 0;
long long int var_18 = 2608582021206926141LL;
_Bool var_19 = (_Bool)1;
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
