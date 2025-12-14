#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2821633438886106534ULL;
unsigned short var_6 = (unsigned short)19202;
unsigned char var_9 = (unsigned char)199;
long long int var_15 = 4967357805957593689LL;
int zero = 0;
signed char var_16 = (signed char)-25;
unsigned long long int var_17 = 1489420331523477497ULL;
unsigned short var_18 = (unsigned short)10402;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
