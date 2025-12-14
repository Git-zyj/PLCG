#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2358955448U;
long long int var_3 = 8466109859429245908LL;
unsigned int var_4 = 1655033753U;
_Bool var_5 = (_Bool)0;
long long int var_6 = -7995214919634778441LL;
long long int var_9 = -2493065783601884685LL;
long long int var_11 = -1629421811977114758LL;
unsigned int var_12 = 3934415785U;
int zero = 0;
long long int var_14 = -6600649228841154055LL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
