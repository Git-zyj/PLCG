#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)69;
unsigned long long int var_7 = 5843056714529370571ULL;
signed char var_8 = (signed char)18;
long long int var_14 = 8802717264352385142LL;
signed char var_15 = (signed char)-113;
long long int var_17 = 8930799710525705693LL;
int zero = 0;
unsigned char var_19 = (unsigned char)83;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)10032;
void init() {
}

void checksum() {
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
