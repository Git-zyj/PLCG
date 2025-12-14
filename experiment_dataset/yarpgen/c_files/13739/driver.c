#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 2513359773544541099LL;
unsigned long long int var_2 = 12057908049479843920ULL;
unsigned long long int var_3 = 15397135412582913779ULL;
unsigned short var_6 = (unsigned short)16749;
unsigned long long int var_8 = 2873098413239408640ULL;
signed char var_10 = (signed char)-35;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)127;
unsigned long long int var_15 = 9952156827580442836ULL;
unsigned short var_16 = (unsigned short)28099;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
