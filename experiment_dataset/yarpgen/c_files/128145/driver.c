#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
int var_6 = -1598206139;
unsigned short var_7 = (unsigned short)21509;
int var_8 = 1434471369;
int var_9 = 2008036937;
signed char var_10 = (signed char)11;
signed char var_11 = (signed char)-115;
signed char var_13 = (signed char)-44;
signed char var_14 = (signed char)-102;
int var_15 = 1495338418;
unsigned short var_16 = (unsigned short)31135;
signed char var_18 = (signed char)-127;
int zero = 0;
int var_19 = -723615668;
unsigned short var_20 = (unsigned short)59647;
void init() {
}

void checksum() {
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
