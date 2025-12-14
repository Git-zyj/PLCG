#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
short var_7 = (short)-8197;
unsigned char var_9 = (unsigned char)181;
int var_11 = 115760680;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_17 = 2083868425726704190LL;
_Bool var_18 = (_Bool)0;
short var_19 = (short)170;
long long int var_20 = 7902228305932396709LL;
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
