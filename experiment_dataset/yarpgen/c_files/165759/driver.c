#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8156829664719036144LL;
unsigned long long int var_5 = 17834820822820557214ULL;
unsigned long long int var_6 = 356952398190382191ULL;
signed char var_7 = (signed char)-117;
unsigned long long int var_9 = 3877678717475254847ULL;
long long int var_10 = 4525736127878844673LL;
int var_12 = -945554920;
unsigned short var_13 = (unsigned short)9029;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 12004427398971289940ULL;
unsigned short var_19 = (unsigned short)51432;
long long int var_20 = -7587274507453093551LL;
short var_21 = (short)12932;
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
