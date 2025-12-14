#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 8219339603903815105ULL;
unsigned short var_8 = (unsigned short)181;
signed char var_10 = (signed char)-82;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)202;
int zero = 0;
long long int var_17 = -6899628974043936310LL;
signed char var_18 = (signed char)105;
int var_19 = -1666743458;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
