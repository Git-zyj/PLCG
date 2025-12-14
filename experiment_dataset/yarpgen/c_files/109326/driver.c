#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 639681750720725647LL;
unsigned char var_2 = (unsigned char)134;
long long int var_3 = 5147495639490048971LL;
unsigned int var_4 = 2206652403U;
int var_5 = 61277797;
unsigned char var_6 = (unsigned char)214;
unsigned short var_7 = (unsigned short)25544;
int var_9 = -372771477;
unsigned long long int var_10 = 7193469885867888602ULL;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)37;
int zero = 0;
unsigned long long int var_18 = 11459379580737146144ULL;
unsigned int var_19 = 2027358852U;
unsigned int var_20 = 907248007U;
int var_21 = 1043479153;
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
