#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42244;
unsigned long long int var_1 = 17069123223442350460ULL;
unsigned short var_2 = (unsigned short)10545;
unsigned long long int var_3 = 2892929369572269633ULL;
signed char var_4 = (signed char)-119;
short var_5 = (short)6967;
long long int var_6 = -2352376674438177437LL;
unsigned int var_7 = 372269126U;
unsigned short var_9 = (unsigned short)5489;
unsigned char var_12 = (unsigned char)155;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_16 = 6286226634177018921LL;
signed char var_17 = (signed char)47;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)11;
short var_20 = (short)-32389;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
