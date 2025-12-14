#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-12;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)6868;
int zero = 0;
unsigned long long int var_12 = 315218799492873623ULL;
unsigned long long int var_13 = 8065055693608502971ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
