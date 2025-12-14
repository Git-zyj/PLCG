#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7349847633360835385ULL;
signed char var_3 = (signed char)52;
unsigned short var_4 = (unsigned short)59135;
unsigned long long int var_5 = 504311333997245055ULL;
_Bool var_6 = (_Bool)1;
short var_8 = (short)1770;
int zero = 0;
unsigned short var_10 = (unsigned short)13614;
unsigned short var_11 = (unsigned short)26514;
unsigned char var_12 = (unsigned char)30;
short var_13 = (short)3929;
unsigned char var_14 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
