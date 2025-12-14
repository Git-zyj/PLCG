#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1201271830992668118ULL;
short var_3 = (short)-29864;
unsigned long long int var_6 = 14628609172622692340ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)108;
int var_10 = -544271744;
int zero = 0;
short var_11 = (short)-9393;
long long int var_12 = -4367076838950905062LL;
long long int var_13 = 6773536803720932169LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
