#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
int var_1 = -342899359;
long long int var_4 = 5340226125789656689LL;
signed char var_6 = (signed char)-14;
unsigned int var_7 = 2939593857U;
_Bool var_9 = (_Bool)0;
int var_10 = -1305827322;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -3964440698267375760LL;
unsigned short var_14 = (unsigned short)45526;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
