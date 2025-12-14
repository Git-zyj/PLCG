#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 5876130283144461622LL;
unsigned long long int var_3 = 16287410397603549385ULL;
int var_4 = -1503465827;
unsigned short var_5 = (unsigned short)47940;
unsigned short var_8 = (unsigned short)1487;
unsigned short var_9 = (unsigned short)1311;
unsigned char var_10 = (unsigned char)217;
int zero = 0;
long long int var_16 = -1196045129239610783LL;
unsigned int var_17 = 480635517U;
unsigned char var_18 = (unsigned char)253;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
