#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2079602776057917094ULL;
int var_2 = 1254973225;
unsigned long long int var_3 = 14417032738930702218ULL;
unsigned short var_8 = (unsigned short)38654;
unsigned long long int var_10 = 5925406855069286497ULL;
unsigned short var_15 = (unsigned short)59180;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)63436;
unsigned short var_22 = (unsigned short)26169;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
