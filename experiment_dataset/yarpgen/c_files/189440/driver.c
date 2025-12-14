#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17414;
unsigned long long int var_2 = 14412345082344348644ULL;
unsigned long long int var_5 = 14279909484724454471ULL;
int var_8 = 117942367;
unsigned long long int var_9 = 12411388858978488676ULL;
int var_10 = -269986662;
short var_11 = (short)-12409;
unsigned long long int var_12 = 16239217156822826221ULL;
unsigned long long int var_14 = 4510084215790534910ULL;
long long int var_15 = -65752972576544393LL;
int zero = 0;
unsigned short var_16 = (unsigned short)15643;
unsigned long long int var_17 = 12201976949370362300ULL;
short var_18 = (short)22081;
unsigned char var_19 = (unsigned char)59;
unsigned long long int var_20 = 3098751516661847644ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
