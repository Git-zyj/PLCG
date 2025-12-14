#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -1047284149;
_Bool var_5 = (_Bool)0;
long long int var_6 = -1884717719340941772LL;
int var_8 = 909298167;
unsigned short var_9 = (unsigned short)39650;
int zero = 0;
long long int var_18 = 8339017979543792842LL;
_Bool var_19 = (_Bool)0;
long long int var_20 = 8946678813502463498LL;
unsigned char var_21 = (unsigned char)54;
void init() {
}

void checksum() {
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
