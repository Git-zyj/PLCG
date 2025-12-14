#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57556;
unsigned short var_4 = (unsigned short)18982;
unsigned char var_7 = (unsigned char)117;
long long int var_9 = -6609230312800193777LL;
long long int var_11 = 5867045042309303928LL;
unsigned char var_12 = (unsigned char)58;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-107;
unsigned char var_21 = (unsigned char)251;
signed char var_22 = (signed char)70;
void init() {
}

void checksum() {
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
