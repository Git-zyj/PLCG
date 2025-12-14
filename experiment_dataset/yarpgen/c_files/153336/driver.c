#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -333086763;
unsigned char var_1 = (unsigned char)162;
signed char var_3 = (signed char)-54;
signed char var_5 = (signed char)-43;
unsigned long long int var_7 = 12308311732815201264ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_13 = (unsigned short)24591;
int zero = 0;
unsigned long long int var_17 = 168975424083514397ULL;
short var_18 = (short)-5901;
short var_19 = (short)-32280;
signed char var_20 = (signed char)-46;
unsigned int var_21 = 2631021527U;
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
