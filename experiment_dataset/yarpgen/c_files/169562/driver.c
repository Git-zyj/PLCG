#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -166412576994166177LL;
long long int var_12 = -391934106806508052LL;
unsigned long long int var_17 = 14666026164130426655ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)54519;
long long int var_19 = 1875929056445379701LL;
short var_20 = (short)-29676;
long long int var_21 = -8625484203219172779LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
