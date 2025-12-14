#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9198994891182872610LL;
unsigned char var_4 = (unsigned char)107;
unsigned short var_6 = (unsigned short)3796;
signed char var_7 = (signed char)-44;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)120;
long long int var_10 = 2942007770507991436LL;
int zero = 0;
unsigned char var_12 = (unsigned char)249;
unsigned int var_13 = 3078435772U;
void init() {
}

void checksum() {
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
