#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61190;
unsigned char var_1 = (unsigned char)79;
unsigned long long int var_2 = 2081066857207081579ULL;
unsigned char var_3 = (unsigned char)15;
unsigned long long int var_5 = 1940890478294711170ULL;
unsigned char var_9 = (unsigned char)192;
short var_14 = (short)28309;
long long int var_15 = 4459321541126530410LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)40;
unsigned long long int var_19 = 16598947858845512230ULL;
void init() {
}

void checksum() {
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
