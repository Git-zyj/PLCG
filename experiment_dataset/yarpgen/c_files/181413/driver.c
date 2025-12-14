#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1967910515415596576LL;
unsigned char var_5 = (unsigned char)170;
_Bool var_9 = (_Bool)1;
unsigned int var_13 = 900798319U;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)27698;
int zero = 0;
short var_19 = (short)10593;
unsigned long long int var_20 = 13228919152248672343ULL;
int var_21 = -134784660;
void init() {
}

void checksum() {
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
