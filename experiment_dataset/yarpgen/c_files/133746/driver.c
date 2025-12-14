#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 452263910U;
signed char var_1 = (signed char)34;
int var_2 = 2076200962;
long long int var_3 = 7550259487440306669LL;
unsigned int var_4 = 1832415531U;
unsigned long long int var_7 = 14930602325700759650ULL;
unsigned char var_9 = (unsigned char)204;
int var_10 = -1041844485;
long long int var_12 = -1966329064956348306LL;
unsigned short var_13 = (unsigned short)47524;
unsigned char var_16 = (unsigned char)230;
int var_17 = -1225572680;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)56;
long long int var_20 = 1604679544428105910LL;
unsigned char var_21 = (unsigned char)62;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
