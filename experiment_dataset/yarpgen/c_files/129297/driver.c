#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16675042285491939489ULL;
int var_4 = -1047723492;
unsigned long long int var_5 = 8746369669404544141ULL;
unsigned long long int var_6 = 14997848290810959178ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)45699;
unsigned char var_10 = (unsigned char)63;
unsigned long long int var_11 = 17111019826477241744ULL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 2614995669027423427LL;
int var_14 = -736181964;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 2370232303880294909ULL;
unsigned long long int var_19 = 18363929545601625650ULL;
unsigned short var_20 = (unsigned short)32555;
_Bool var_21 = (_Bool)0;
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
