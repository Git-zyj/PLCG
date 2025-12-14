#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1080934554;
unsigned long long int var_1 = 3453364469062604701ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_9 = 2357425094409402925ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)20790;
unsigned short var_15 = (unsigned short)57970;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
