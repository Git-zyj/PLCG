#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48997;
long long int var_3 = -8365251633479186936LL;
unsigned short var_6 = (unsigned short)20746;
long long int var_7 = -2225834770492444140LL;
unsigned int var_13 = 4251801536U;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = -1818003761;
_Bool var_19 = (_Bool)0;
int var_20 = -491241084;
int var_21 = -209694190;
unsigned short var_22 = (unsigned short)17880;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
