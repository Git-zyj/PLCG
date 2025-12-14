#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3663471994U;
long long int var_1 = -160108801675338537LL;
long long int var_2 = -9092900958722160134LL;
int var_3 = -458046675;
int var_7 = -1268902612;
unsigned long long int var_8 = 6648058465768970022ULL;
unsigned short var_9 = (unsigned short)42641;
long long int var_10 = 2733775588117462349LL;
unsigned short var_11 = (unsigned short)62068;
int zero = 0;
unsigned long long int var_12 = 15514466286118840751ULL;
long long int var_13 = 340788132226621157LL;
short var_14 = (short)6147;
signed char var_15 = (signed char)-16;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
