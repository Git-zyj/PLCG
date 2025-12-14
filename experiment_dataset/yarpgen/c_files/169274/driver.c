#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15995752220962620878ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 3148451060U;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)1;
int zero = 0;
unsigned long long int var_17 = 787778949708419757ULL;
unsigned long long int var_18 = 1656704052699204900ULL;
unsigned long long int var_19 = 11025752840904388307ULL;
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
