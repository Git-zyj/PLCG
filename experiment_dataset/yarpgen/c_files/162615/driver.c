#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 118987782;
unsigned long long int var_2 = 18439431870219336898ULL;
unsigned short var_4 = (unsigned short)20470;
long long int var_5 = 3043255941694446764LL;
unsigned short var_6 = (unsigned short)55311;
unsigned short var_7 = (unsigned short)51919;
long long int var_8 = -8209723039314371526LL;
signed char var_9 = (signed char)45;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)25;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
