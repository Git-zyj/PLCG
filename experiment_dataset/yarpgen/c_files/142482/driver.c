#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10737;
unsigned short var_4 = (unsigned short)3521;
long long int var_9 = 5799487369062009541LL;
long long int var_10 = 180379011369000802LL;
unsigned char var_11 = (unsigned char)236;
unsigned long long int var_12 = 1193184785311296256ULL;
int zero = 0;
long long int var_15 = -8998449115562447420LL;
short var_16 = (short)-29167;
unsigned char var_17 = (unsigned char)123;
unsigned long long int var_18 = 12973414183616521922ULL;
int var_19 = 441227828;
int var_20 = 632408688;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
