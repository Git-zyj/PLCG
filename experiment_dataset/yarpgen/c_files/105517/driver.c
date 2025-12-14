#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43707;
_Bool var_1 = (_Bool)0;
unsigned char var_5 = (unsigned char)188;
unsigned char var_6 = (unsigned char)180;
unsigned char var_8 = (unsigned char)56;
long long int var_9 = 4736775101730573081LL;
int zero = 0;
unsigned long long int var_10 = 17572155783552885708ULL;
unsigned short var_11 = (unsigned short)23652;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
