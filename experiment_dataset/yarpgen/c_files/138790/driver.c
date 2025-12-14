#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2292889727626743115ULL;
unsigned long long int var_9 = 5586100721841432637ULL;
unsigned long long int var_11 = 16602715226430811821ULL;
signed char var_17 = (signed char)-18;
int zero = 0;
unsigned int var_18 = 2989477891U;
unsigned long long int var_19 = 13623428743452871285ULL;
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
