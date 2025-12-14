#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7822366107058307410LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 8532577098920838463ULL;
unsigned int var_4 = 3300231U;
unsigned char var_5 = (unsigned char)69;
int zero = 0;
long long int var_10 = -5822659775742039295LL;
unsigned short var_11 = (unsigned short)26928;
long long int var_12 = 6912510682512416376LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
