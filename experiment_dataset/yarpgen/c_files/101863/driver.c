#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)30;
long long int var_2 = 3393194092132250766LL;
signed char var_3 = (signed char)47;
int var_6 = 478167084;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-90;
int zero = 0;
unsigned char var_13 = (unsigned char)120;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
