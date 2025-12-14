#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8370438568049425194LL;
int var_1 = -569737359;
unsigned short var_3 = (unsigned short)17750;
unsigned short var_4 = (unsigned short)16635;
unsigned short var_6 = (unsigned short)55955;
long long int var_9 = -3577361311213341601LL;
unsigned short var_10 = (unsigned short)37191;
unsigned int var_11 = 2971083585U;
long long int var_12 = -1363704252779101358LL;
int zero = 0;
unsigned char var_18 = (unsigned char)109;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)24047;
unsigned long long int var_21 = 406513821275055057ULL;
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
