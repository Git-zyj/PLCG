#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
unsigned char var_3 = (unsigned char)226;
short var_4 = (short)-14263;
unsigned long long int var_5 = 8938668922550687286ULL;
unsigned short var_9 = (unsigned short)43738;
unsigned char var_10 = (unsigned char)10;
long long int var_11 = 7522318360880416246LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)53412;
unsigned char var_18 = (unsigned char)149;
int var_19 = -198801331;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
