#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 488839380087103597ULL;
long long int var_1 = 5895273469114924521LL;
unsigned short var_2 = (unsigned short)50001;
signed char var_4 = (signed char)122;
long long int var_8 = -5937744235667521322LL;
unsigned short var_10 = (unsigned short)45288;
short var_12 = (short)25934;
signed char var_13 = (signed char)-44;
int var_14 = 1406705041;
unsigned long long int var_15 = 13911733705103918088ULL;
int zero = 0;
signed char var_16 = (signed char)111;
unsigned int var_17 = 2957535506U;
unsigned int var_18 = 3738466354U;
unsigned int var_19 = 2625168888U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
