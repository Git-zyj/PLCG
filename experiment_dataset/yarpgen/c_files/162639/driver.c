#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)18275;
signed char var_6 = (signed char)-103;
unsigned char var_8 = (unsigned char)251;
long long int var_9 = 8346368178072503062LL;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)5;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8267694039104191282LL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
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
