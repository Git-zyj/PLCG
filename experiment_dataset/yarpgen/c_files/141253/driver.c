#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-107;
unsigned int var_3 = 3548898211U;
int var_7 = -1258879881;
signed char var_9 = (signed char)34;
unsigned char var_12 = (unsigned char)180;
signed char var_13 = (signed char)-37;
int zero = 0;
signed char var_15 = (signed char)21;
signed char var_16 = (signed char)-39;
signed char var_17 = (signed char)-29;
long long int var_18 = 7387271101498328797LL;
unsigned char var_19 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
