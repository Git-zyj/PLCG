#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)23;
_Bool var_13 = (_Bool)1;
unsigned long long int var_16 = 9766024031383432272ULL;
int zero = 0;
long long int var_17 = 1492267640845595935LL;
unsigned long long int var_18 = 1417978961396188343ULL;
short var_19 = (short)-1202;
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
