#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3104528622673204332ULL;
unsigned short var_4 = (unsigned short)18032;
short var_5 = (short)16054;
unsigned int var_6 = 2893689934U;
unsigned char var_8 = (unsigned char)138;
long long int var_10 = -2910978538048957882LL;
long long int var_12 = -1597371706391692681LL;
unsigned short var_15 = (unsigned short)26538;
short var_16 = (short)2412;
int var_17 = 1565664581;
int zero = 0;
unsigned short var_18 = (unsigned short)60570;
unsigned long long int var_19 = 10437604140495035868ULL;
unsigned int var_20 = 1320775869U;
unsigned int var_21 = 2844262594U;
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
