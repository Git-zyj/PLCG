#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8025;
unsigned long long int var_2 = 15688504961086485418ULL;
short var_3 = (short)-23321;
unsigned long long int var_4 = 7242380540388548678ULL;
unsigned char var_5 = (unsigned char)34;
unsigned long long int var_6 = 17351462287219612637ULL;
unsigned int var_7 = 3679200059U;
long long int var_8 = -7795446820494490516LL;
int zero = 0;
unsigned int var_10 = 570571794U;
long long int var_11 = 348408074822901697LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
