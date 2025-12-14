#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)224;
unsigned short var_4 = (unsigned short)64527;
long long int var_5 = -208453024695185156LL;
unsigned long long int var_6 = 8304848854819683907ULL;
signed char var_9 = (signed char)39;
int var_12 = 44305031;
_Bool var_14 = (_Bool)1;
short var_17 = (short)17318;
int zero = 0;
int var_19 = -624775463;
signed char var_20 = (signed char)90;
short var_21 = (short)-29724;
unsigned char var_22 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
