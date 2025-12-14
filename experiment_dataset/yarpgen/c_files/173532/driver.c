#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)187;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)51440;
signed char var_5 = (signed char)22;
unsigned char var_8 = (unsigned char)196;
unsigned int var_9 = 2103059119U;
unsigned short var_12 = (unsigned short)49160;
unsigned short var_13 = (unsigned short)41693;
int zero = 0;
unsigned short var_17 = (unsigned short)4723;
unsigned long long int var_18 = 14347390729412509182ULL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 8390910168791934356LL;
unsigned char var_21 = (unsigned char)201;
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
