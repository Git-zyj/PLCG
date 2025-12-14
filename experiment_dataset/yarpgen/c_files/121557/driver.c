#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-40;
int var_6 = 819519967;
unsigned long long int var_8 = 556962781446395557ULL;
unsigned long long int var_9 = 3510660545263141826ULL;
unsigned long long int var_12 = 14354469673198159165ULL;
int zero = 0;
unsigned long long int var_13 = 17853053456870765870ULL;
unsigned short var_14 = (unsigned short)58181;
unsigned char var_15 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
