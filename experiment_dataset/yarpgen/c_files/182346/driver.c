#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18596;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2800522290U;
long long int var_12 = -1661400197910700543LL;
int zero = 0;
int var_17 = -1479135962;
unsigned short var_18 = (unsigned short)61569;
unsigned int var_19 = 2533966024U;
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
