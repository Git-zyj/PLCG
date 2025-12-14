#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)183;
long long int var_5 = -1803229810762968450LL;
unsigned long long int var_8 = 6040212971448739605ULL;
long long int var_9 = -2098334609401003227LL;
signed char var_15 = (signed char)-25;
unsigned long long int var_16 = 6818705077606928989ULL;
int zero = 0;
short var_17 = (short)-10112;
_Bool var_18 = (_Bool)1;
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
