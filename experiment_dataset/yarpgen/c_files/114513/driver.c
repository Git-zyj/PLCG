#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)193;
signed char var_1 = (signed char)-121;
unsigned char var_3 = (unsigned char)46;
unsigned char var_6 = (unsigned char)138;
unsigned char var_7 = (unsigned char)173;
unsigned short var_8 = (unsigned short)39392;
signed char var_9 = (signed char)48;
signed char var_10 = (signed char)0;
int zero = 0;
long long int var_11 = -4104305841478368416LL;
unsigned char var_12 = (unsigned char)105;
unsigned char var_13 = (unsigned char)155;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
