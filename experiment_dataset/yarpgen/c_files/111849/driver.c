#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 320257279U;
unsigned short var_2 = (unsigned short)63014;
unsigned short var_3 = (unsigned short)41443;
unsigned short var_5 = (unsigned short)19439;
unsigned char var_6 = (unsigned char)178;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 3508145848129983685ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)125;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)60248;
long long int var_13 = -3972178176281377927LL;
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
