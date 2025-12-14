#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_4 = (unsigned char)208;
int var_5 = 1533156277;
int var_6 = 1443384318;
unsigned char var_8 = (unsigned char)51;
unsigned short var_9 = (unsigned short)42333;
unsigned short var_10 = (unsigned short)64495;
unsigned short var_11 = (unsigned short)48162;
int zero = 0;
unsigned char var_18 = (unsigned char)18;
unsigned short var_19 = (unsigned short)27441;
int var_20 = -227373292;
void init() {
}

void checksum() {
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
