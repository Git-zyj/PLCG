#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-18;
unsigned short var_6 = (unsigned short)61218;
short var_9 = (short)5009;
unsigned char var_10 = (unsigned char)106;
int zero = 0;
unsigned long long int var_17 = 15432861301962551638ULL;
long long int var_18 = -6983353091178147843LL;
unsigned long long int var_19 = 10731797928466385961ULL;
unsigned int var_20 = 3234556264U;
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
