#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2624131768U;
unsigned short var_8 = (unsigned short)23053;
unsigned int var_10 = 3289864916U;
int zero = 0;
unsigned char var_18 = (unsigned char)17;
int var_19 = -49350164;
signed char var_20 = (signed char)125;
unsigned int var_21 = 2656063353U;
unsigned int var_22 = 559655019U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
