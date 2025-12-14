#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8348069020029805390ULL;
unsigned char var_1 = (unsigned char)174;
long long int var_6 = 6413490310940732526LL;
signed char var_7 = (signed char)114;
unsigned long long int var_13 = 18329232969621305516ULL;
unsigned char var_14 = (unsigned char)67;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)220;
unsigned char var_21 = (unsigned char)189;
void init() {
}

void checksum() {
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
