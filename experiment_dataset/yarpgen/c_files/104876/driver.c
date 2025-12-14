#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37417;
unsigned short var_5 = (unsigned short)55155;
long long int var_9 = -6917890643299999055LL;
unsigned short var_13 = (unsigned short)57072;
unsigned short var_14 = (unsigned short)23497;
unsigned short var_18 = (unsigned short)11183;
unsigned short var_19 = (unsigned short)25240;
int zero = 0;
unsigned short var_20 = (unsigned short)15623;
long long int var_21 = -1720036347589566778LL;
long long int var_22 = -40303202513730159LL;
unsigned short var_23 = (unsigned short)25629;
long long int var_24 = 1945031197328042371LL;
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
