#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5533591179022233751LL;
unsigned long long int var_4 = 7505309469279783866ULL;
unsigned long long int var_5 = 10583684118131470468ULL;
unsigned char var_6 = (unsigned char)109;
unsigned long long int var_8 = 13801020769929300458ULL;
unsigned long long int var_14 = 5964452609648908588ULL;
unsigned long long int var_16 = 7321949175633055757ULL;
int zero = 0;
unsigned long long int var_17 = 7880590263820675842ULL;
unsigned int var_18 = 2547198063U;
long long int var_19 = -4715553062725329114LL;
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
