#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1536227163;
signed char var_2 = (signed char)109;
unsigned long long int var_4 = 3629780380192833763ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)1521;
int zero = 0;
long long int var_10 = 2395333142620063877LL;
unsigned long long int var_11 = 12499244339336385682ULL;
short var_12 = (short)-14969;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
