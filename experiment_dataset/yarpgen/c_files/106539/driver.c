#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 32132219877495601ULL;
unsigned long long int var_2 = 16221869267537998978ULL;
unsigned long long int var_7 = 7159608450032458091ULL;
unsigned long long int var_8 = 7351385913188404640ULL;
unsigned long long int var_9 = 9656298382304075076ULL;
unsigned char var_10 = (unsigned char)95;
int zero = 0;
unsigned char var_17 = (unsigned char)223;
unsigned long long int var_18 = 9573014243080061118ULL;
signed char var_19 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
