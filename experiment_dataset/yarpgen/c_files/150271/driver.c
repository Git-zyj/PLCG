#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 65814616U;
unsigned short var_2 = (unsigned short)31029;
long long int var_5 = -6667854142557653583LL;
long long int var_9 = 1904786981103934422LL;
unsigned long long int var_14 = 11421547514594124852ULL;
int zero = 0;
signed char var_17 = (signed char)30;
long long int var_18 = 2616877020224641919LL;
unsigned short var_19 = (unsigned short)24480;
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
