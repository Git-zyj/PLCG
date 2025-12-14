#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2860;
unsigned long long int var_1 = 2814078018744974198ULL;
unsigned long long int var_6 = 9629251162244701883ULL;
unsigned char var_15 = (unsigned char)29;
int zero = 0;
int var_20 = -1377103507;
unsigned int var_21 = 2659583261U;
unsigned long long int var_22 = 17762022222008789190ULL;
unsigned int var_23 = 4064906269U;
long long int var_24 = -5164506009614392078LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
