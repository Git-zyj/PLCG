#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35351;
long long int var_9 = 465116769268805910LL;
signed char var_16 = (signed char)-11;
short var_17 = (short)24580;
int zero = 0;
int var_18 = -1486260516;
unsigned long long int var_19 = 6427081189348661630ULL;
void init() {
}

void checksum() {
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
