#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5128315447240051154ULL;
unsigned long long int var_3 = 16097841184830171660ULL;
unsigned long long int var_4 = 8721456781158594676ULL;
unsigned long long int var_9 = 10242573065173558716ULL;
int zero = 0;
unsigned long long int var_15 = 5305121512490946905ULL;
unsigned long long int var_16 = 6936906172028600769ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
