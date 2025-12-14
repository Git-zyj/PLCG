#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 596142075U;
long long int var_1 = -211220476903363571LL;
long long int var_2 = -7748105685123347048LL;
unsigned long long int var_4 = 4012525301726385861ULL;
signed char var_5 = (signed char)-55;
unsigned int var_7 = 2001362133U;
unsigned char var_9 = (unsigned char)218;
int zero = 0;
short var_10 = (short)20723;
unsigned short var_11 = (unsigned short)17495;
unsigned short var_12 = (unsigned short)63871;
unsigned long long int var_13 = 11871544609204452055ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
