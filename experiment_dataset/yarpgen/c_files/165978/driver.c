#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10131170553262034250ULL;
signed char var_1 = (signed char)127;
long long int var_4 = -8304642376706716282LL;
unsigned long long int var_6 = 9758130772086724536ULL;
unsigned short var_7 = (unsigned short)23210;
unsigned long long int var_8 = 11529527412583546636ULL;
unsigned short var_9 = (unsigned short)49935;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)201;
_Bool var_12 = (_Bool)0;
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
