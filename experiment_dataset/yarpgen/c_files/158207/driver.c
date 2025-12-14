#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-56;
signed char var_4 = (signed char)-85;
_Bool var_13 = (_Bool)1;
long long int var_14 = -2649766868675239850LL;
unsigned long long int var_16 = 14774648414107487449ULL;
int zero = 0;
long long int var_18 = -1790563392047243987LL;
unsigned char var_19 = (unsigned char)193;
void init() {
}

void checksum() {
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
