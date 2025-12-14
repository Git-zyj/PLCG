#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19762;
unsigned long long int var_5 = 9359307107118199759ULL;
long long int var_6 = 7197910807729949704LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 17633066281700459381ULL;
signed char var_18 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
