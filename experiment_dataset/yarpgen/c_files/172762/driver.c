#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 3407321579067158883ULL;
short var_7 = (short)15768;
short var_9 = (short)10671;
int zero = 0;
unsigned short var_16 = (unsigned short)30296;
long long int var_17 = -5896190703197328902LL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
