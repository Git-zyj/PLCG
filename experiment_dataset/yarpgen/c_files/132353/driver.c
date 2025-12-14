#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1036270282;
long long int var_1 = 1343988682944795543LL;
long long int var_2 = -3015161536681017314LL;
int var_3 = 1571598610;
unsigned long long int var_5 = 14933892252297100186ULL;
int var_7 = 1011383970;
unsigned long long int var_14 = 3436863269021610624ULL;
int var_16 = 1906810553;
int zero = 0;
unsigned long long int var_17 = 2056238105084616852ULL;
unsigned long long int var_18 = 6436230985562267769ULL;
long long int var_19 = 1276540471758601892LL;
unsigned long long int var_20 = 17739798534182266356ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
