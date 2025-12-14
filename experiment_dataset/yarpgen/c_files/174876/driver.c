#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17426662197963486534ULL;
unsigned char var_5 = (unsigned char)108;
signed char var_7 = (signed char)-28;
unsigned short var_9 = (unsigned short)62284;
unsigned short var_15 = (unsigned short)10626;
unsigned int var_18 = 3872069233U;
int zero = 0;
unsigned short var_20 = (unsigned short)27953;
unsigned long long int var_21 = 7396489633540616809ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
