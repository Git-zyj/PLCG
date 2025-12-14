#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
unsigned long long int var_1 = 16978138474234440272ULL;
int var_2 = -2145808518;
long long int var_3 = 6464393343801301742LL;
unsigned int var_5 = 3664306228U;
int var_6 = 1333932789;
long long int var_7 = 1188327387642729321LL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)3;
unsigned long long int var_10 = 15024559152994308177ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)115;
unsigned int var_14 = 1106949230U;
long long int var_16 = 3684869198097080607LL;
int zero = 0;
unsigned short var_17 = (unsigned short)17940;
unsigned char var_18 = (unsigned char)21;
unsigned int var_19 = 954009511U;
unsigned int var_20 = 2915511319U;
unsigned short var_21 = (unsigned short)19110;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
