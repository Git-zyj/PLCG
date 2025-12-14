#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57882;
int var_3 = 781845155;
int var_5 = 1806676824;
short var_7 = (short)15411;
_Bool var_10 = (_Bool)1;
long long int var_12 = 5629830461260584774LL;
long long int var_13 = 524232727778812366LL;
long long int var_17 = 9114057479966714090LL;
short var_18 = (short)26535;
int zero = 0;
unsigned char var_19 = (unsigned char)89;
signed char var_20 = (signed char)-123;
unsigned long long int var_21 = 6722642738260982930ULL;
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
